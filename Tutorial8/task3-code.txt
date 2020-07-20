#include "task3_class.h"
#include <iostream> 
#include <cmath>

class Advanced_Point: public Point// inherited (child) class
{
    public:
    float x, y, z;

    Advanced_Point(): x(0), y(0), z(0){}
    Advanced_Point(float x, float y, float z): Point (x,y,z){}
    
    void reset();
};

// main program 
int main () 
{  

    Advanced_Point A1; 
    A1.set();
    cout << "The function prints out: \n"; 
    A1.print ();  
    cout << "The result of norm is: "<< A1.norm() << endl; 
    A1.negate ();  
    cout << "The result of negate: \n";
    A1.print();
    A1.reset();
    cout <<"After reset, the function prints out: \n";
    A1.print();


    return 0; 
} 
 
//Rational function definitions 
void Advanced_Point::reset()
{
    Point::setX(0);
    Point::setY(0);
    Point::setZ(0);
}