#include "simple_list.h"
#include <stdlib.h>

void pop_back_list(sl_list_t **list)
{
    void *save_ptr = NULL;

    if (list == NULL || (*list) == NULL)
        return;
    if (!(*list)->next)
        return;
    save_ptr = (*list);
    while ((*list)->next->next)
        (*list) = (*list)->next;
    free((*list)->next);
    (*list)->next = NULL;
    (*list) = save_ptr;
}