#include <stdio.h>
#include <stdlib.h>
#include "src/simple_list.h"

int main(void)
{
    sl_list_t *list = init_list();
    int test = 1;
    int num = 30;
    list->data = &test;
    append_list(&list,&num);

    printf("%i\n", *(int *)list->data);
    printf("%i\n", *(int *)list->next->data);

    pop_back_list(&list);
    if(list->next == NULL)
        printf("Last node correctly delete\n");
    
    append_list(&list, &num);
    printf("%i\n", *(int *)list->data);
    printf("%i\n", *(int *)list->next->data);
    free_list(list);
    return 0;
}