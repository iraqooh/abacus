#include <stdio.h>
#include <string.h>
#include "menu.h"
#include "history.h"
#include "settings.h"
#include "calculations.h"

void display_main_menu() {
    printf("\nMain Menu:\n");
    printf("1. Calculator\n");
    printf("2. History\n");
    printf("3. Settings\n");
    printf("4. Exit\n");
}

void display_calculator_menu() {
    printf("\nCalculator Menu:\n");
    printf("1. Arithmetics\n");
    printf("2. Algebra\n");
    printf("3. Trigonometry\n");
    printf("4. Logarithm\n");
    printf("5. Statistics\n");
    printf("6. Finance\n");
    printf("7. Calculus\n");
    printf("8. Conversion\n");
    printf("9. Constants\n");
    printf("10. Programming\n");
    printf("11. Back\n");
}

void handle_main_menu_input(char *input) {
    if (strcmp(input, "1") == 0) {
        printf("Handling calculator\n\n");
        handle_calculator_menu();
    } else if (strcmp(input, "2") == 0) {
        display_history();
    } else if (strcmp(input, "3") == 0) {
        handle_settings_menu();
    } else {
        printf("Invalid option. Please try again.\n");
    }
}

void handle_calculator_menu() {
    char input[50];
    while (1) {
        display_calculator_menu();
        printf("Enter your choice: ");
        scanf("%s", input);
        if (strcmp(input, "11") == 0 || strcmp(input, "back") == 0) {
            break;
        } else {
            handle_calculation(input);
        }
    }
}

void handle_settings_menu() {
    char input[50];
    while (1) {
        display_settings_menu();
        printf("Enter your choice: ");
        scanf("%s", input);
        if (strcmp(input, "back") == 0) {
            break;
        } else {
            handle_settings(input);
        }
    }
}

void display_settings_menu() {
    printf("\nSettings Menu:\n");
    printf("1. Precision\n");
    printf("2. Number Formatting\n");
    printf("3. Expression Modes\n");
    printf("4. Language\n");
    printf("5. Back\n");
}
