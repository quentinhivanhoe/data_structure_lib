#include "singly_linked_list.h"
#include <stdio.h>

void print_sll_nbr(sll_t *list)
{
    if (!list)
        return;
    printf("%i -> ", *(int *)list->data);
    if (!list->next)
        printf("\n");
}

void print_sll_str(sll_t *list)
{
    if (!list)
        return;
    printf("%s -> ", (char *)list->data);
    if (!list->next)
        printf("\n");
}