#ifndef SINGLY_LINKED_LIST_H_
    #define SINGLY_LINKED_LIST_H_
    #include <stdbool.h>
    #include <stddef.h>

typedef struct singly_linked_list_s {
    void *data;
    struct singly_linked_list_s *next;
} sll_t;

typedef void (*upd_func)(sll_t *, void *, void *);
typedef void (*sll_printer)(sll_t *);

///////////////////////////////////////////////////////////////////////////////
/// @brief allocate a new node of linked list, all field is set to null
/// @return return a pointer to the new singly linked lit allocated
/// @note don't forget to free the new node, or call the free function on it
///////////////////////////////////////////////////////////////////////////////
sll_t *init_sll(void);

///////////////////////////////////////////////////////////////////////////////
/// @brief free all node of the singly linked list
/// @param list the list to free all node
/// @note don't free element allocated in the node of the singly linked list
///////////////////////////////////////////////////////////////////////////////
void free_sll(sll_t *list);

///////////////////////////////////////////////////////////////////////////////
/// @brief add a new node at the end of the list, and set data in it
/// @param list a singly linked list to add a new at the end
/// @param data the new data to assign to the new node
///////////////////////////////////////////////////////////////////////////////
void append_sll(sll_t **list, void *data);

///////////////////////////////////////////////////////////////////////////////
/// @brief delete the last node at the end of the singly linked list
/// @param list the singly linked list to delete the last node
///////////////////////////////////////////////////////////////////////////////
void popBack_sll(sll_t **list);

///////////////////////////////////////////////////////////////////////////////
/// @brief  basic function to print a node contening an int
/// @param list the node to print element
/// @note   is an implemented function for a vary basic singly linked list
///         you can implemented your own printer function. you just have to
///         take the sll_t * as parameters
///////////////////////////////////////////////////////////////////////////////
void print_sll_nbr(sll_t *list);

///////////////////////////////////////////////////////////////////////////////
/// @brief basic function to print a string node
/// @param list the node of the singly linked list
/// @note   you can implement your own function printer it just need to print
///         the element of the node
///////////////////////////////////////////////////////////////////////////////
void print_sll_str(sll_t *list);

///////////////////////////////////////////////////////////////////////////////
/// @brief  parse the linked list and call the callback function, to testing 
///         it you can use printer function. You can implement your own 
///         callback funtion and use them as pointer to function
/// @param list the singly linked list to parse
/// @param callback the callback function
///////////////////////////////////////////////////////////////////////////////
void callback_sll(sll_t *list, void (*callback)(sll_t *));

///////////////////////////////////////////////////////////////////////////////
/// @brief  get a data in the linked list, it parse the linked list and call
///         the compare function. When the compare function return a value
///         different than NULL is the end of the parsing and the value is 
///         returned
/// @param list the singly linked list to get the data
/// @param key the key to found the data on the singly linked list
/// @param cmp_func the compare function to be called, you can code your own
///                 compare function it depends on your needs. The compare
///                 needs to return NULL and a pointer to the value
/// @return a pointer to the data to get
/// @note   you have to cast the pointer on what you need to use them
///////////////////////////////////////////////////////////////////////////////
void *sll_get_data(sll_t *list, void *key, void *(*cmp_func)(sll_t *, void *));
void *get_data_int(sll_t *list, void *data);
void *get_data_str(sll_t *list, void *data);

///////////////////////////////////////////////////////////////////////////////
/// @brief update a value in the singly linked list
/// @param list the list to parse
/// @param key the key to found the value to update
/// @param data the new data to be setted
/// @param callback the updater function who will compare and update
/// @note   you can implemnt your own function for you need it must be a
///         upd_func type
///////////////////////////////////////////////////////////////////////////////
void sll_update_data(sll_t **list, void *key, void *data, upd_func callback);
void upd_nbr(sll_t *node, void *key, void *data);

#endif