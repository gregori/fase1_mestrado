#ifndef _TREE_H_
#define _TREE_H_

struct tree {
   struct node *root;
};

struct node {
   int data;
   struct node *left;
   struct node *right;
};

void insert(struct tree *tree, int data);
int remove(struct tree *tree, int data);
void print_tree(struct tree *tree);
void create_tree(struct tree *tree);
int height(struct tree *tree);

#endif
