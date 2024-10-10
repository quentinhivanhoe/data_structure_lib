#include <stdio.h>
#include <stdlib.h>

typedef struct simple_linked_list_s {
    void *data;
    struct simple_linked_list_s *next;
} list_t;

list_t *init_list(void)
{
    list_t *list = malloc(sizeof(list));

    if (!list)
        return NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}

int main(void)
{
    list_t *list = init_list();
    char *str = "Test";
    int test = 1;
    list->data = test;

    printf("%i\n", list->data);
    return 0;
}