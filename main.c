#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sll_t *list = init_sll();
    // int num = 10;
    // int nbr = 30;
    // int test = 20;
    char *str = "bonjour";
    char *string = "au revoir";
    char *word = "les amis !";
    list->data = str;

    append_sll(&list, string);
    callback_sll(list, &print_sll_str);
    sll_update_data(&list, string, word, &upd_nbr);
    callback_sll(list, &print_sll_str);
    free_sll(list);
    return 0;
}