#include "simple_list.h"
#include <stdlib.h>

void free_list(list_t *list)
{
    void *save_ptr = NULL;

    if (!list)
        return;
    while (list) {
        save_ptr = list;
        list = list->next;
        free(save_ptr);    
    }
}