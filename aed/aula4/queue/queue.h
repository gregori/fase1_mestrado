#ifndef _QUEUE_H_
#define _QUEUE_H_

struct queue {
   struct node *first;
   struct node *last;
};

struct node {
   int data;
   struct node *next;
};

void enqueue(struct queue *q, int data);
int dequeue(struct queue *q);
void print_first(struct queue *q);
bool empty_queue(struct queue *q);
void create_queue(struct queue *q);

#endif
