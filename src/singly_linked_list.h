#ifndef SINGLY_LINKED_LIST_H_
    #define SINGLY_LINKED_LIST_H_

typedef struct singly_linked_list_s {
    void *data;
    struct singly_linked_list_s *next;
} sl_list_t;

typedef void (*sllist_printer)(sl_list_t *);
sl_list_t *init_sllist(void);
void free_sllist(sl_list_t *list);
void append_sllist(sl_list_t **list, void *data);
void popBack_sllist(sl_list_t **list);

void print_sllist_nbr(sl_list_t *list);
void print_sllist_str(sl_list_t *list);
void callback_sllist(sl_list_t *list, void (*callback)(sl_list_t *));

#endif