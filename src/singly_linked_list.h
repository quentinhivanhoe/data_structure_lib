#ifndef SINGLY_LINKED_LIST_H_
    #define SINGLY_LINKED_LIST_H_
    #include <stdbool.h>
    #include <stddef.h>

typedef struct singly_linked_list_s {
    void *data;
    struct singly_linked_list_s *next;
} sll_t;

typedef void (*upd_func)(sll_t *, void *, void *);

typedef void (*sll_printer)(sll_t *);
sll_t *init_sll(void);
void free_sll(sll_t *list);
void append_sll(sll_t **list, void *data);
void popBack_sll(sll_t **list);

void print_sll_nbr(sll_t *list);
void print_sll_str(sll_t *list);
void callback_sll(sll_t *list, void (*callback)(sll_t *));
void *get_data_int(sll_t *list, void *data);
void *sll_get_data(sll_t *list, void *key, void *(*cmp_func)(sll_t *, void *));
void *get_data_str(sll_t *list, void *data);
void sll_update_data(sll_t **list, void *key, void *data, upd_func callback);
void upd_nbr(sll_t *node, void *key, void *data);

#endif