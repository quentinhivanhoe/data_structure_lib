#include <stdio.h>
#include <stdlib.h>
#include "src/simple_list.h"

int main(void)
{
    list_t *list = init_list();
    int test = 1;
    list->data = &test;

    printf("%i\n", *(int *)list->data);
    free(list);
    return 0;
}