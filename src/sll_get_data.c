#include "singly_linked_list.h"
#include <string.h>

void *get_data_int(sll_t *list, void *data)
{
    if (!list)
        return NULL;
    return (*(int *)list->data == *(int *)data) ? (list->data) : (NULL);
}

void *get_data_str(sll_t *list, void *data)
{
    if (!list)
        return NULL;
    return (!strcmp((char *)list->data, (char *)data)) ? (list->data) : (NULL);
}

void *sll_get_data(sll_t *list, void *key, cmp_func callback)
{
    void *res = NULL;
    void *save_ptr = NULL;

    if (!list)
        return NULL;
    save_ptr = list;
    while (list) {
        res = callback(list, key);
        if (res)
            break;
        list = list->next;
    }
    list = save_ptr;
    return res;
}