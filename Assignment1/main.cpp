#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>

using namespace std;

int main() {
    //BST::BST test = BST::BST();
    //test.put(3,4);
    //BST::Node*  n1 = new BST::Node(4,5,);
    //BST::put(Node* x, int key, int val);
    //test.put(4,5);
    //cout "Maximum" >> test.get(3) ;
   // std::cout << test.get(3) << "\n";
   BST *newBST =  new BST();
   cout  << "Check BST is empty:"  << newBST ->isEmpty() << endl;
   //BST::Node *BST::minNode(BST::Node *x);
   newBST -> put(3,4);
   newBST -> put(4,5);
    newBST -> put(5,6);
     newBST -> put(6,7);
      newBST -> put(7,8);
       newBST -> put(9,10);
   cout  << "minimum key is " << newBST ->min() << endl;
    //cout  << newBST ->minNode(BST::Node *5);
     cout  << "next val" << newBST ->get(4) << endl;
      cout  << "next val" <<  newBST ->get(5) << endl;
       cout  <<"next val" <<  newBST ->get(6) << endl;




    

    return 0;
}