#include "singly_linked_list.h"
#include <stddef.h>

void callback_sllist(sl_list_t *list, void (*callback)(sl_list_t *))
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