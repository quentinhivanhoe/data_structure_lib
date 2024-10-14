#include <stdio.h>
#include <stdlib.h>
#include "src/simple_list.h"

int main(void)
{
    list_t *list = init_list();
    int test = 1;
    int num = 30;
    list->data = &test;
    add_in_list(&list,&num);

    if (!list->next)
        printf("NULL\n");
    printf("%i\n", *(int *)list->data);
    printf("%i\n", *(int *)list->next->data);
    free_list(list);
    return 0;
}