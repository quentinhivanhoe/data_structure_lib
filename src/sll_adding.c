#include "singly_linked_list.h"
#include <stddef.h>

void sll_append(sll_t **list, void *data)
{
    void *save_ptr = NULL;

    if (list == NULL || (*list) == NULL)
        return;
    save_ptr = (*list);
    while ((*list)->next)
        (*list) = (*list)->next;
    (*list)->next = sll_init();
    (*list) = (*list)->next;
    (*list)->data = data;
    (*list) = save_ptr;
}

void sll_add(sll_t **list, void *data)
{
    sll_t *node = NULL;

    if (!list || !(*list))
        return;
    node = sll_init();
    if (!node)
        return;
    node->data = data;
    node->next = (*list);
    (*list) = node;
}

void sll_insert(sll_t **list, void *data, void *key, cmp_func callback)
{
    sll_t *node = NULL;
    void *save_ptr = NULL;
    void *res = NULL;

    if (!list || !(*list) || !key || !callback)
        return;
    save_ptr = (*list);
    while ((*list)) {
        res = callback((*list), key);
        if (res) {
            node = sll_new_node(data, (*list)->next);
            (*list)->next = node;
            break;
        }
        (*list) = (*list)->next;
    }
    (*list) = save_ptr;
}