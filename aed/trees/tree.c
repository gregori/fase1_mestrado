/*
 * =====================================================================================
 *
 *       Filename:  tree.c
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
#include "tree.h"
#include <vector>

using namespace std;

bool is_empty(struct tree *tree)
{
   if (tree->first == NULL && tree->last == NULL)
      return true;

   return false;
}

void create_tree (struct tree *tree)
{
   tree->root = NULL;
}

void insert(struct tree *tree, int data) 
{
   struct node *aux, *new_node;

   new_node = new struct node;
   new_node->data = data;
   new_node->left = new_node->right = NULL;

   aux = tree->root;
   while (aux != NULL) {
      if (data < aux->data) 
         aux = aux->left;
      if (data > aux->data)
         aux = aux->right;
   }

   if (data < aux->data)
      aux->left = new_node;
   if (data > aux->data)
      aux->right = new_node;
   
}

void remove(struct tree *tree, int data)
{
   struct node *aux, *aux2;

   if (tree->root == NULL) 
   {
      cout << "Lista vazia!" << endl;
      return -1;
   }

   aux = tree->root;
  
   while (aux->data != data) {
      aux2 = aux;
      if (data < aux->data)
         aux = aux->left;
      if (data > aux->data)
         aux = aux->right;
   }

   if (aux->right == NULL && aux->left == NULL) { // leaf node
      if (aux2->left == aux)
         aux2->left = NULL;
      else
         aux2->right = NULL;

   } else if (aux->right == NULL && aux->left != NULL) { // it has a left child
      if (aux2->left == aux)
         aux2->left = aux->left;
      else
         aux2->right = aux->left;

   } else if (aux->right != NULL && aux->left == NULL) { // it has a right child
      if (aux2->left == aux)
         aux2->left = aux->right;
      else
         aux2->right = aux->right;

   } else { // node has 2 children
      aux3 = aux->left;
      while (aux3->right != NULL)
         aux3 = aux3->right; // find the rightmost element

      aux3->right = aux->right;
      if (aux2->left == aux)
         aux2->left = aux->left;
      else
         aux2->right = aux->left;
   }

   delete aux;
}

int height(struct tree *tree)
{
   int lheight, rheight;

   if (tree != NULL) {
      lheight = height(tree->root->left);
      rheight = height(tree->root->right);

      if (lheight > rheight)
         return lheight + 1;
      else
         return rheight + 1;
   } else {
      return -1;
   }
}

void print_tree(struct tree *tree)
{
   struct node *aux;
   int h = height(tree);
   vector<*node> vn, *vh;
   int depth = 0;

   if (tree == NULL)
      cout << "Árvore vazia!" << endl;
   else {
      vh = new vector<*node>[h];
      
      // read in preorder (right first)
      // assembling a vector array, with node pointers
      preorder_right_first(tree->root, aux, &depth);

      // for each pointer in array
      // for each node in the vector
      // print data + right + left
   }
}
