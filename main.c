#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sll_t *list = init_sll();
    char *test = "bonjour";
    char *str = "au revoir";
    list->data = test;

    append_sll(&list,str);
    callback_sll(list, &print_sll_str);
    free_sll(list);
    return 0;
}