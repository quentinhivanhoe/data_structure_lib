#include "singly_linked_list.h"
#include <stddef.h>

void append_sll(sll_t **list, void *data)
{
    void *save_ptr = NULL;

    if (list == NULL || (*list) == NULL)
        return;
    save_ptr = (*list);
    while ((*list)->next)
        (*list) = (*list)->next;
    (*list)->next = init_sll();
    (*list) = (*list)->next;
    (*list)->data = data;
    (*list) = save_ptr;
}