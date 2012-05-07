/*
 * =====================================================================================
 *
 *       Filename:  Tree.c
 *
 *    Description:  Chained tree implementation
 *
 *        Version:  1.0
 *        Created:  19-03-2012 10:36:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */

#include <iostream>
#include "Tree.h"
#include <queue>


using namespace std;

Tree::Tree()
{
    root = NULL;
}

Tree::~Tree()
{
    // TODO: Clean the tree
}

Node* Tree::getRoot() const
{
    return root;
}

bool Tree::isEmpty() const
{
    return (root == NULL);
}

void Tree::insert(const int data) 
{
    Node *aux, *parent, *newNode;

    newNode = new Node(data);

    if (isEmpty())
    {
        root = newNode;
        root->setDepth(0);
    }
    else
    {
        aux = root;
        while (aux != NULL)
        {
            parent = aux;
            aux = aux->getChildFromValue(data); // returns left or right according to the value of data
        }

        // Inserts the node according to the search tree rule
        parent->setNewChild(newNode);
    }
}

int Tree::remove(int data)
{
    Node *aux, *aux2, *aux3, *parent;

    int value;

    if (isEmpty()) 
    {
        cout << "Lista vazia!" << endl;
        return -1;
    }

    aux = root;

    // Finding the node and its parent
    while (aux->getData() != data) 
    {
        parent = aux; // this is the parent node
        aux = aux->getChildFromValue(data);
    }

    if (aux->isLeaf()) 
    { // leaf node
        if (parent->getLeft() == aux)
            parent->setLeft(NULL);
        else
            parent->setRight(NULL);

    } 
    else if (aux->getRight() == NULL) 
    { // it has a left child
        if (parent->getLeft() == aux)
            parent->setLeft(aux->getLeft());
        else
            parent->setRight(aux->getLeft());

        aux->getLeft()->setDepth(parent->getDepth()+1);
        aux->getLeft()->setChildrenDepth();
    } 
    else if (aux->getLeft() == NULL) 
    { // it has a right child
        if (parent->getLeft() == aux)
            parent->setLeft(aux->getRight());
        else
            parent->setRight(aux->getRight());

        aux->getRight()->setDepth(parent->getDepth()+1);
        aux->getRight()->setChildrenDepth();

    } 
    else 
    { // node has 2 children
        aux2 = aux->getLeft();
        while (aux2->getRight() != NULL)
        {
            aux2 = aux2->getRight(); // find the rightmost element
        }

        aux2->setRight(aux->getRight());

        if (parent->getLeft() == aux)
            parent->setLeft(aux->getLeft());
        else
            parent->setRight(aux->getLeft());

        aux->getLeft()->setDepth(parent->getDepth()+1);
        aux->getLeft()->setChildrenDepth();
    }

    value = aux->getData();

    delete aux;

    return value;
}

int Tree::getHeight()
{
    if (isEmpty())
        return -1;

    return root->getHeight();
}

void Tree::printTree()
{
    if (isEmpty())
        cout << "Árvore Vazia!" << endl;
    else
    {
        queue<Node*> q;
        Node *aux;

        q.push(root);
        while (!q.empty())
        {
            aux = q.front();
            q.pop();
            cout << *aux<< endl;

            if (aux->getRight() != NULL)
                q.push(aux->getRight());

            if (aux->getLeft() != NULL)
                q.push(aux->getLeft());

        }
    }
}

