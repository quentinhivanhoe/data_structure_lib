#ifndef SIMPLE_LIST_H_
    #define SIMPLE_LIST_H_

typedef struct simple_linked_list_s {
    void *data;
    struct simple_linked_list_s *next;
} sl_list_t;

sl_list_t *init_list(void);
void free_list(sl_list_t *list);
void append_list(sl_list_t **list, void *data);
void pop_back_list(sl_list_t **list);

#endif