#include "Point.cpp"
#include <iostream> 
#include <cmath>

class Advanced_Point: public Point
{
    public:
        Advanced_Point(float coordx, float coordy, float coordz): Point(coordx,coordy,coordz){}
        void reset();
};

using namespace std;

// main program 
int main () 
{  
    Advanced_Point A1(1,2,3);
    A1.set();
    cout << "The function prints out: \n"; 
    A1.print ();  
    cout << "The result of norm is: "<< A1.norm() << endl; 
    A1.negate ();  
    cout << "The result of negate: \n";
    A1.print();
    A1.reset();
    cout << "After reset, the function prints out: \n";
    A1.print();
    return 0; 
} 

void Advanced_Point::reset()
{
    coordx = 0;
    coordy = 0;
    coordz = 0;
}