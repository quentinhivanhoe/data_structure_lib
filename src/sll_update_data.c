#include "singly_linked_list.h"
#include <string.h>

void upd_nbr(sll_t *node, void *key, void *data)
{
    if (!node)
        return;
    if (*(int *)node->data == *(int *)key)
        node->data = data;
}

void upd_str(sll_t *node, void *key, void *data)
{
    if (!node)
        return;
    if (!strcmp((char *)node->data, (char *)key))
        node->data = data;
}

void sll_update_data(sll_t **list, void *key, void *data, upd_func callback)
{
    void *save_ptr = NULL;

    if (!list || !(*list))
        return;
    save_ptr = (*list);
    while ((*list)) {
        callback((*list), key, data);
        (*list) = (*list)->next;
    }
    (*list) = save_ptr;
}