#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>

using namespace std;

int main() {
    BST::BST test = BST::BST();
    test.put(3,4);
    //test.put(4,5);
    //cout "Maximum" >> test.get(3) ;
    std::cout << test.get(3) << "\n";




    

    return 0;
}