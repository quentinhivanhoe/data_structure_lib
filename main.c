#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sll_t *list = sll_new_node("bonjour", NULL);
    // int num = 10;
    // int nbr = 30;
    // int test = 20;
    char *str = "bonjour";
    char *string = "au revoir";
    char *word = "les amis";

    sll_append(&list, word);
    sll_printer(list, &print_str);
    sll_insert(&list, string, str, get_data_str);
    sll_printer(list, &print_str);
    sll_free(list);
    return 0;
}