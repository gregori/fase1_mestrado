/*
 * =====================================================================================
 *
 *       Filename:  Node.h
 *
 *    Description:  Node class for data structures
 *
 *        Version:  1.0
 *        Created:  09-04-2012 09:03:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */

namespace aed {
class Node {
   private:
      int data;
      Node *next;
      Node *prev;
   
   public:
      Node(int d=0);
      ~Node();
      void setNext(Node *n);
      Node* getNext();
      void setPrev(Node *p);
      Node* getPrev();
      void setData(int d);
      int getData();
   };

}
