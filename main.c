#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sll_t *list = sll_init();
    // int num = 10;
    // int nbr = 30;
    // int test = 20;
    char *str = "bonjour";
    char *string = "au revoir";
    char *word = "les amis !";
    list->data = str;

    sll_append(&list, string);
    sll_printer(list, &print_str);
    sll_update_data(&list, string, word, &upd_nbr);
    sll_printer(list, &print_str);
    sll_free(list);
    return 0;
}