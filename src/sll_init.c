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