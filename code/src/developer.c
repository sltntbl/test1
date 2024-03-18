#include "developer.h"

#include <stdio.h>

// @brief Initializes a developer with the provided name and alias.
// @param developer_ptr Pointer to the developer structure to be initialized.
// @param name The name of the developer.
// @param alias The alias of the developer.
void developer_init(developer *const developer_ptr, const char name[], const char alias[]) {
    // Check if the pointer to the developer structure is valid
    if (developer_ptr) {
        // Assign the provided name and alias to the developer
        printf(developer_ptr->name, sizeof(developer_ptr->name), "%s", name);
        printf(developer_ptr->alias, sizeof(developer_ptr->alias), "%s", alias);
    }
}

// @brief Prints the name and alias of a developer.
// @param developer_ptr Pointer to the developer structure.
void developer_list(developer const *const developer_ptr) {
    // Check if the pointer to the developer structure is valid
    if (developer_ptr) {
        // Print the name and alias of the developer
        printf("Name: %s, Alias: %s\n", developer_ptr->name, developer_ptr->alias);
    }
}
