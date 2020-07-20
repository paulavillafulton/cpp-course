#include <iostream> 
#include <cmath>
#include "Point.h"

using namespace std;


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

void Point::set()
{
    cout << "Please provide X, Y, Z values: \n";
    cin >> coordx >> coordy >> coordz;
}