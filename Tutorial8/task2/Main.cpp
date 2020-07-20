#include "Point.cpp"
#include <iostream> 
#include <cmath>

using namespace std;

// main program 
int main () 
{  
    Point A1(1,2,3);
    A1.set();
    cout << "The function prints out: \n"; 
    A1.print ();  
    cout << "The result of norm is: "<< A1.norm() << endl; 
    A1.negate ();  
    cout << "The result of negate: \n";
    A1.print();
    return 0; 
} 