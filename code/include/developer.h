#ifndef DEVELOPER_H_
#define DEVELOPER_H_

/*
 * @brief Maximum length for the name of a developer.
 */
#define DEVELOPER_NAME_MAX 30

/*
 * @brief Maximum length for the alias of a developer.
 */
#define DEVELOPER_ALIAS_MAX 30

/*
 * @brief Struct representing a developer.
 */
typedef struct 
{
   char name[DEVELOPER_NAME_MAX]; /**< The name of the developer. */
   char alias[DEVELOPER_ALIAS_MAX]; /**< The alias of the developer. */
} developer;

/*
 * @brief Initializes a developer structure with the provided name and alias.
 *
 * @param developer_ptr Pointer to the developer structure to be initialized.
 * @param name The name to be assigned to the developer.
 * @param alias The alias to be assigned to the developer.
 */
void developer_init(developer *const developer_ptr, const char name[], const char alias[]);

/*
 * @brief Prints the name and alias of a developer.
 *
 * @param developer_ptr Pointer to the developer structure to be listed.
 */
void developer_list(developer const *const developer_ptr);

#endif
