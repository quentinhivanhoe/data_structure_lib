#include <stdlib.h>
#include "simple_list.h"

list_t *init_list(void)
{
    list_t *list = malloc(sizeof(list_t));

    if (!list)
        return NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}