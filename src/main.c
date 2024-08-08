#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "history.h"
#include "settings.h"
#include "calculations.h"

void display_welcome_message() {
    printf("Welcome to Abacus Command Line Calculator!\n");
}

int main() {
    char input[50];
    display_welcome_message();
    while (1) {
        display_main_menu();
        printf("Enter your choice: ");
        scanf("%s", input);
        if (strcmp(input, "4") == 0 || strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0) {
            printf("Exiting Abacus. Goodbye!\n");
            break;
        }
        handle_main_menu_input(input);
    }
    return 0;
}
