#include <iostream> 
#include <cmath>

using namespace std;

//class declaration  
 
class Point 
{  
    public:
    Point (float x, float y, float z)
    {
        coordx = x;
        coordy = y;
        coordz = z;
    }

    double norm (); // norm
    void negate ();  // negate element 
    void print ();  // print as a function

    private:
        float coordx, coordy, coordz;
};
    
// main program 
int main () 
{  
    Point A1(1,2,3);
    cout << "The function prints out: \n"; 
    A1.print ();  
    cout << "The result of norm is: "<< A1.norm() << endl; 
    A1.negate ();  
    cout << "The result of negate: \n";
    A1.print();
    return 0; 
} 
 
//Rational function definitions 

void Point::print() 
{  
    cout << "The x value is: "<<coordx<< "\n""The y value is: "<<coordy<< "\n""The z value is: "<<coordz<< "\n"; 
} 
 
double Point::norm() 
{  
    float norm_vals;

    norm_vals = sqrt(pow(coordx,2)+pow(coordy,2)+pow(coordz,2));
    return norm_vals;
} 

void Point::negate() 
{  
    coordx = coordx*(-1);
    coordy = coordy*(-1);
    coordz = coordz*(-1);
    //cout << "The x value is: "<<x<< "\n""The y value is: "<<y<< "\n""The z value is: "<<z<< "\n"; 
} 