/*
 * =====================================================================================
 *
 *       Filename:  Node.h
 *
 *    Description:  Node class for tree exercise
 *
 *        Version:  1.0
 *        Created:  03/05/2012 20:38:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  UTFPR
 *
 * =====================================================================================
 */

#ifndef _NODE_H_
#define _NODE_H_

#include <queue>
#include <iostream>
#include <cstddef>

using namespace std;

class Node {
private:
    int data;
    int depth;
    Node* left;
    Node* right;


public:
    Node(const int data=0);
    ~Node();
    void setData(const int d);
    int getData() const;

    void setLeft(Node* l);
    Node* getLeft() const;

    void setRight(Node* r);
    Node* getRight() const;

    void setNewChild(Node* n);
    Node* getChildFromValue(int data);

    bool isLeaf() const;

    int getHeight();
    int getDepth() const;
    void setDepth(const int d);
    void setChildrenDepth();

    // friend, so that it can access members of Node
    friend ostream& operator<<( ostream& os, const Node& node);
};

#endif

