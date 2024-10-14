#ifndef SIMPLE_LIST_H_
    #define SIMPLE_LIST_H_

typedef struct simple_linked_list_s {
    void *data;
    struct simple_linked_list_s *next;
} list_t;

list_t *init_list(void);

#endif