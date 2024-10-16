#ifndef SINGLY_LINKED_LIST_H_
    #define SINGLY_LINKED_LIST_H_

typedef struct singly_linked_list_s {
    void *data;
    struct singly_linked_list_s *next;
} sll_t;

typedef void (*sll_printer)(sll_t *);
sll_t *init_sll(void);
void free_sll(sll_t *list);
void append_sll(sll_t **list, void *data);
void popBack_sll(sll_t **list);

void print_sll_nbr(sll_t *list);
void print_sll_str(sll_t *list);
void callback_sll(sll_t *list, void (*callback)(sll_t *));

#endif