#include "singly_linked_list.h"
#include <stdio.h>

void print_sllist_nbr(sl_list_t *list)
{
    if (!list)
        return;
    printf("%i -> ", *(int *)list->data);
    if (!list->next)
        printf("\n");
}

void print_sllist_str(sl_list_t *list)
{
    if (!list)
        return;
    printf("%s -> ", (char *)list->data);
    if (!list->next)
        printf("\n");
}