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

   string line;
   BST *newBST =  new BST();
   BST *newBST1 =  new BST();
   RBTree *newRBTree = new RBTree();
   SplayTree *newSplayTree =new SplayTree();

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
            cout << i <<","<< newBST-> height() << ','<<float( begin_time) <<endl;
        }
        
    }
    else cout << "Unable to open file"; 
    ifstream myfile1 ("data_2.txt");

     if (myfile1.is_open())
    {
        while ( getline (myfile1,line) )
        {
        //cout << line << '\n';
        int b = atoi(line.c_str());
            std::clock ();
            i++;
            const clock_t begin_time1 = clock();
            newRBTree -> put(b,i);
            cout << i <<","<< newRBTree-> height() << ','<<float( begin_time1) <<endl;
        }
        
    }
    else cout << "Unable to open file"; 
    ifstream myfile2 ("data_1.txt");

     if (myfile2.is_open())
    {
        while ( getline (myfile2,line) )
        {
        //cout << line << '\n';
        int b = atoi(line.c_str());
            std::clock ();
            i++;
            const clock_t begin_time2 = clock();
            newSplayTree -> put(b,i);
            cout << i <<","<< newSplayTree-> height() << ','<<float( begin_time2) <<endl;
        }
        myfile.close();
        myfile1.close();
        myfile2.close();
    }
    else cout << "Unable to open file"; 
    return 0;
}