#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

#include "developer.h"

#define DEVELOPERS_MAX_NUMBER 2 /**< Maximum number of developers in the group */
#define GROUP_LOGO_MAX 1000      /**< Maximum length of group logo string */

/**
 * @brief Struct representing a group of developers with a common logo.
 */
typedef struct
{
    developer developers[DEVELOPERS_MAX_NUMBER]; /**< Array of developers */
    char group_logo[GROUP_LOGO_MAX];            /**< Group logo string */
} developer_group;

/**
 * @brief Initializes a developer group with the provided group logo and list of developers.
 * 
 * @param dev_group     Pointer to the developer group structure to be initialized.
 * @param group_logo    The logo to be assigned to the developer group.
 * @param developer_list An array of pointers to developers to be assigned to the group.
 */
void dev_group_init(developer_group *const dev_group, const char group_logo[], developer *const developer_list[]);

/**
 * @brief Prints information about the developer group.
 * 
 * @param dev_gr Pointer to the developer group structure to be printed.
 */
void print_group(developer_group const *const dev_gr);

/**
 * @brief Prints the logo of the developer group.
 * 
 * @param dev_gr Pointer to the developer group structure whose logo is to be printed.
 */
void print_group_logo(developer_group const *const dev_gr);

#endif
