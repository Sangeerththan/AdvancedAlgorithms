#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <thread>

using namespace std;

int main() {
    //BST::BST test = BST::BST();
    //test.put(3,4);
    //BST::Node*  n1 = new BST::Node(4,5,);
    //BST::put(Node* x, int key, int val);
    //test.put(4,5);
    //cout "Maximum" >> test.get(3) ;
   // std::cout << test.get(3) << "\n";
   string line;
    int complexity(void*);
   BST *newBST =  new BST();
   BST *newBST1 =  new BST();
   RBTree *newRBTree = new RBTree();
   SplayTree *newSplayTree =new SplayTree();

  // cout  << "Check BST is empty:"  << newBST ->isEmpty() << endl;
   //BST::Node *BST::minNode(BST::Node *x);
   //newBST -> put(3,4);
   //newBST -> put(4,5);
    //newBST -> put(5,6);
     //newBST -> put(6,7);
      //newBST -> put(7,8);
       //newBST -> put(9,10);
   //cout  << "minimum key is " << newBST ->min() << endl;
    //cout  << newBST ->minNode(BST::Node *5);
    //cout  << "next val" << newBST ->get(4) << endl;
    //cout  << "next val" <<  newBST ->get(5) << endl;
    //cout  <<"next val" <<  newBST ->get(6) << endl;

    ifstream myfile ("data_1.txt");
    int i = 0;
    //Time complexity of a BST
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
        //cout << line << '\n';
        int b = atoi(line.c_str());
            std::clock ();
            i++;
            const clock_t begin_time = clock();
            newBST -> put(b,i);
            //cout <<"Height: "<< newBST-> height()  << endl;
            //cout  << "next val: " << i << endl;
            //std::cout << "Time: " << float( begin_time) << endl;
            cout << i <<","<< newBST-> height() << ','<<float( begin_time) <<endl;
            //std::cout << "time taken"<< float( clock () - begin_time ) ;
        }
        myfile.close();
        //std::clock ();
        //const clock_t begin_time = clock();
            // do something
        //std::cout << float( clock () - begin_time ) // CLOCKS_PER_SEC;
       
    }

    else cout << "Unable to open file"; 

    return 0;
}