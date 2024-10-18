#include "singly_linked_list.h"
#include <stdio.h>

void print_nbr(sll_t *node)
{
    if (!node)
        return;
    printf("%i -> ", *(int *)node->data);
    if (!node->next)
        printf("\n");
}

void print_str(sll_t *node)
{
    if (!node)
        return;
    printf("%s -> ", (char *)node->data);
    if (!node->next)
        printf("\n");
}

void sll_printer(sll_t *list, print_func callback)
{
    void *save_ptr = NULL;

    if (!list)
        return;
    save_ptr = list;
    while (list) {
        callback(list);
        list = list->next;
    }
    list = save_ptr;
}