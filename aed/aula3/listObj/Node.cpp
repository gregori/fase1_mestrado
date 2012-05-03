/*
 * =====================================================================================
 *
 *       Filename:  Node.cpp
 *
 *    Description:  Node implementation
 *
 *        Version:  1.0
 *        Created:  09-04-2012 09:10:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */

namespace aed {

Node::Node(int d) {
   data = d;
   next = NULL;
   prev = NULL;
   size = 0;
}

Node::~Node() {
   next = NULL;
   prev = NULL;
}

void Node::setNext(Node *n) {
   next = n;
}

void Node::setPrev(Node *p) {
   prev = p;
}

Node* Node::getNext() {
   return next;
}

Node* Node::getPrev() {
   return prev;
}

void Node::setData(int d) {
   data = d;
}

int Node::getData() {
   return data;
}

}
