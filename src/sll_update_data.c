#include "singly_linked_list.h"
#include <string.h>

bool str_compare(sll_t *node, void *key)
{
    if (!node)
        return false;
    return (!strcmp((char *)node->data, (char *)key)) ? (true) : (false);
}

bool nbr_compare(sll_t *node, void *key)
{
    if (!node)
        return false;
    return (*(int *)node->data == *(int *)key) ? (true) : (false);
}

void sll_update_data(sll_t **list, void *key, void *data, bool (*cmp_func)(sll_t *, void *))
{
    void *save_ptr = NULL;

    if (!list || !(*list))
        return;
    save_ptr = (*list);
    while ((*list)) {
        if (cmp_func((*list), key))
            (*list)->data = data;
        (*list) = (*list)->next;
    }
    (*list) = save_ptr;
}