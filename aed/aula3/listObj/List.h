#ifndef _LIST_H_
#define _LIST_H_

class List {
private:
   List::Node *first;
   List::Node *last;
   int size;

   class Node {
   private:
      int data;
      Node *next;
      Node *prev;
   
   public:
      Node(int d);
      ~Node();
      void setNext(Node *n);
      Node* getNext();
      void setPrev(Node *p);
      Node* getPrev();
      void setData(int d);
      int getData();
   };

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
   void printList();
};
