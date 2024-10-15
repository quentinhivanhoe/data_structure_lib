#include <stdio.h>
#include <stdlib.h>
#include "src/singly_linked_list.h"

int main(void)
{
    sl_list_t *list = init_sllist();
    int test = 1;
    int num = 30;
    list->data = &test;
    append_sllist(&list,&num);

    printf("%i\n", *(int *)list->data);
    printf("%i\n", *(int *)list->next->data);

    popBack_sllist(&list);
    if(list->next == NULL)
        printf("Last node correctly delete\n");
    
    append_sllist(&list, &num);
    printf("%i\n", *(int *)list->data);
    printf("%i\n", *(int *)list->next->data);
    free_sllist(list);
    return 0;
}