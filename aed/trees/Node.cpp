/*
 * =====================================================================================
 *
 *       Filename:  Node.cpp
 *
 *    Description:  Node for chained tree implementation
 *
 *        Version:  1.0
 *        Created:  03/05/2012 20:42:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  UTFPR
 *
 * =====================================================================================
 */
#include "Node.h"
#include <algorithm>
#include <string>

Node::Node(const int d) {
    data = d;
    left = NULL;
    right = NULL;
}

Node::~Node() {
    left = NULL;
    right = NULL;
}

void Node::setData(const int d) {
    data = d;
}

int Node::getData() const {
    return data;
}

void Node::setLeft(Node* l) {
    left = l;
}

Node* Node::getLeft() const {
    return left;
}

void Node::setRight(Node* r) {
    right = r;
}

Node* Node::getRight() const {
    return right;
}

void Node::setNewChild(Node* n)
{
    if (n->getData() < data)
        setLeft(n);
    if (n->getData() > data)
        setRight(n);

    n->setDepth(depth + 1);
}

Node* Node::getChildFromValue(int data)
{
    if (data < this->data)
        return left;
    if (data > this->data)
        return right;
}

bool Node::isLeaf() const
{
    return (left == NULL && right == NULL);
}

int Node::getHeight()
{
    int lheight, rheight;

    if (isLeaf())
        return 0;

    lheight = left->getHeight();
    rheight = right->getHeight();

    return max((lheight + 1), (rheight + 1));
}

int Node::getDepth() const
{
    return depth;
}

void Node::setDepth(const int d)
{
    depth = d;
}

void Node::setChildrenDepth()
{
    if (left != NULL)
    {
        left->setDepth(depth + 1);
        left->setChildrenDepth();
    }

    if (right != NULL)
    {
        right->setDepth(depth + 1);
        right->setChildrenDepth();
    }
}

ostream& operator<<(ostream& os, const Node& node)
{
    string n, buf;
    int r, l;

    if ( node.depth ) 
    {
        n = "Nó ";
        buf = ": ";
    }
    else 
    {
        n = "Raiz: ";
        buf = " ";
    }

    r = node.right ? node.right->data : -1;
    l = node.left ? node.left->data : -1;

    return os << n << node.data << buf << "FD: " << r << " FE: " << l;
}
