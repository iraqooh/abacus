CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = 
OBJ = src/main.o src/menu.o src/calculations.o src/settings.o src/history.o #src/utils.o

all: bin/abacus

bin/abacus: $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

src/main.o: src/main.c #include/common.h
	$(CC) $(CFLAGS) -c $< -o $@

src/menu.o: src/menu.c src/menu.h #include/common.h
	$(CC) $(CFLAGS) -c $< -o $@

src/calculations.o: src/calculations.c src/calculations.h #include/common.h
	$(CC) $(CFLAGS) -c $< -o $@

#src/utils.o: src/utils.c src/utils.h #include/common.h
#	$(CC) $(CFLAGS) -c $< -o $@

src/settings.o: src/settings.c src/settings.h #include/common.h
	$(CC) $(CFLAGS) -c $< -o $@

src/history.o: src/history.c src/history.h #include/common.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o bin/abacus
