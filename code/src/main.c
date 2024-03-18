#include <stdio.h>
#include <stdlib.h>

#include "developer_group.h"

// Main function to interact with the developer group
int main() {
    // Variables for user input handling
    long action = 0;
    char *ptr = NULL;
    char input[30];

    // Flag to control loop execution
    int continue_loop = 1;

    // Declare a developer group instance
    developer_group dev_gr;

    // Declare an array to hold developer instances
    developer developers[2];

    // Initialize developers
    developer_init(&developers[0], "Paul Brunenbusch", "Sternenkrieger");
    developer_init(&developers[1], "Sultan Tabul", "Alias 2");

    // Initialize developer group with group logo and developer list
    dev_group_init(&dev_gr, "Group Logo", developers);

    // Main loop for interaction
    while (continue_loop) {
        // Print menu options
        printf("\033[4;92m========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");

        // Prompt for user input
        printf("Enter your selection: ");
        scanf("%s", input);
        action = strtol(input, &ptr, 10);

        // Process user action
        switch (action) {
            case 0:
                printf("That was not a valid input!\n");
                break;
            case 1:
                // List all developers in the group
                for (int i = 0; i < 2; ++i) {
                    developer_list(&(dev_gr.developers[i]));
                }
                break;
            case 2:
                // Print the group logo
                print_group_logo(&dev_gr);
                break;
            case 3:
                // Print the group including members and logo
                print_group(&dev_gr);
                break;
            case 4:
                continue_loop = 0;
                break;
            default:
                printf("That was not a valid input!\n");
                break;
        }
    }

    return 0;
}
