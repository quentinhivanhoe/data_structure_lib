#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sl_list_t *list = init_sllist();
    char *test = "bonjour";
    char *str = "au revoir";
    list->data = test;

    append_sllist(&list,str);
    callback_sllist(list, &print_sllist_str);
    printf("-------\n");
    popBack_sllist(&list);
    callback_sllist(list, &print_sllist_str);    
    append_sllist(&list, str);
    printf("-------\n");
    callback_sllist(list, &print_sllist_str);
    free_sllist(list);
    return 0;
}