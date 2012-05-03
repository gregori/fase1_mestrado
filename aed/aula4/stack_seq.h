#ifndef _STACK_SEQ_H_
#define _STACK_SEQ_H_

struct stack {
   int size;
   int top;
   int end;
   int stack[5]; 
};

void push(struct stack &s, int data);
int pop(struct stack &s);
void print_top(struct stack &s);
bool is_empty_stack(struct stack &s);
bool is_full_stack(struct stack &s);
void create_stack(struct stack &s);

#endif
