#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sll_t *list = init_sll();
    int num = 10;
    int nbr = 30;
    int test = 20;
    // char *str = "bonjour";
    // char *string = "au revoir";
    // char *word = "les amis !";
    list->data = &num;

    append_sll(&list, &nbr);
    callback_sll(list, &print_sll_nbr);
    sll_update_data(&list, &nbr, &test, &nbr_compare);
    callback_sll(list, &print_sll_nbr);
    free_sll(list);
    return 0;
}