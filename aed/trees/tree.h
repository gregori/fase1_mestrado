#ifndef _TREE_H_
#define _TREE_H_

#include "Node.h"

class Tree {
private:
    Node* root;

public:
    Tree();
    ~Tree();

    bool isEmpty() const;
    Node* getRoot() const;
    void insert(const int data);
    int remove(const int data);
    int getHeight();
    void printTree();
};

#endif
