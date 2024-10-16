#include "singly_linked_list.h"
#include <stddef.h>

void callback_sll(sll_t *list, void (*callback)(sll_t *))
{
    void *save_ptr = NULL;

    if (!list)
        return;
    save_ptr = list;
    while (list) {
        callback(list);
        list = list->next;
    }
    list = save_ptr;
}