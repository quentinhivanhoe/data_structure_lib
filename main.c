#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sll_t *list = init_sll();
    // int num = 10;
    // int nbr = 30;
    // int test = 0;
    char *str = "bonjour";
    char *string = "au revoir";
    char *word = NULL;
    list->data = str;

    append_sll(&list, string);
    word = (char *)sll_get_data(list, str, &get_data_int);
    printf("word = %s\n", word);
    callback_sll(list, &print_sll_str);
    free_sll(list);
    return 0;
}