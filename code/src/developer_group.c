#include "developer_group.h"
#include <stdio.h>

// @brief Initializes the developer group with the provided group logo and developer list.
// @param dev_group Pointer to the developer group structure to be initialized.
// @param group_logo The logo to be assigned to the developer group.
// @param developer_list Array of pointers to developer structures.
void dev_group_init(developer_group *const dev_group, const char group_logo[], developer *const developer_list[]) {
    // Check if the provided pointers are valid
    if (dev_group && developer_list && group_logo) {
        // Assign developers to the group
        for (int i = 0; i < 2; ++i) {
            // Ensure the pointer to the developer structure is valid
            if (developer_list[i]) {
                dev_group->developers[i] = *developer_list[i];
            } else {
                // Print error message if an invalid pointer is found
                fprintf(stderr, "Invalid pointer in developer_list[%d]\n", i);
                // Terminate the function or provide alternative error handling
                return;
            }
        }
        // Assign the group logo
        printf(dev_group->group_logo, sizeof(dev_group->group_logo), "%s", group_logo);
    } else {
        // Print error message if an invalid pointer is found
        fprintf(stderr, "Invalid pointers in dev_group_init\n");
    }
}

// @brief Prints the developer group.
// @param dev_gr Pointer to the developer group structure.
void print_group(developer_group const *const dev_gr) {
    if (dev_gr) {
        // Print developer group
        printf("Group Members:\n");
        for (int i = 0; i < 2; ++i) {
            developer_list(&(dev_gr->developers[i]));
        }
        printf("\n");
        // Print group logo
        print_group_logo(dev_gr);
    }
}

// @brief Prints the group logo.
// @param dev_gr Pointer to the developer group structure.
void print_group_logo(developer_group const *const dev_gr) {
    if (dev_gr) {
        // Print group logo
        printf("Group Logo: %s\n", dev_gr->group_logo);
    }
}
