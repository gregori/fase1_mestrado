#ifndef _LIST_H_
#define _LIST_H_

struct list {
   int size;
   struct node *first;
   struct node *last;
};

struct node {
   int data;
   struct node *next;
};

void insert_first(struct list *list, int data);
void insert_last(struct list *list, int data);
int remove_first(struct list *list);
int remove_last(struct list *list);
void print_list(struct list *list);
bool empty_list(struct list *list);
void create_list(struct list *list);

#endif
