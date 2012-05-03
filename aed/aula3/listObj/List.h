#ifndef _LIST_H_
#define _LIST_H_

#include "Node.h"

namespace aed {

class List {
private:
   Node *first;
   Node *last;
   int size;

public:
   List();
   ~List();
   void setFirst(Node *f);
   Node* getFirst();
   void setLast(Node *l);
   Node* getLast();
   void insertFirst(int d);
   void insertLast(int d);
   int removeFirst();
   int removeLast();
   bool isEmpty();
   int getSize();
   int getFirstData();
   int getLastData();
};

}
