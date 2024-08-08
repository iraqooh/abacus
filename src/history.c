#include <stdio.h>
#include <stdlib.h>
#include "history.h"

void display_history() {
    FILE *file = fopen("data/history.txt", "r");
    if (!file) {
        printf("No history found.\n");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}
