#include "singly_linked_list.h"
#include <stdlib.h>

void sll_free(sll_t *list)
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