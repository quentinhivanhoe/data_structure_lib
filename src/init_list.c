#include <stdlib.h>
#include "singly_linked_list.h"

sl_list_t *init_sllist(void)
{
    sl_list_t *list = malloc(sizeof(sl_list_t));

    if (!list)
        return NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}