#include <stdlib.h>
#include "singly_linked_list.h"

sll_t *sll_init(void)
{
    sll_t *list = malloc(sizeof(sll_t));

    if (!list)
        return NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}

sll_t *sll_new_node(void *data, sll_t *next)
{
    sll_t *list = malloc(sizeof(sll_t));

    if (!list)
        return NULL;
    list->data = data;
    list->next = next;
    return list;
}

void sll_set_node(sll_t **node, void *data, sll_t *next)
{
    if (!node || !(*node))
        return;
    (*node)->data = data;
    (*node)->next = next;
}