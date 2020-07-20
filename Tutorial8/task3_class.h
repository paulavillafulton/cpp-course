#include <iostream> 
#include <cmath>

using namespace std;

//class declaration  
 class Point 
{  
    public:
    float x, y, z;

    Point(): x(0), y(0), z(0){}
    Point(float x, float y, float z): x(x), y(y), z(z) {}
    
    float norm_vals;
    void set();
    double norm (); // norm
    void negate ();  // negate element 
    void print ();  // print as a function
    void setX(float);
    void setY(float);
    void setZ(float);
    
}; 

//Rational function definitions 
void Point::set()
{
    cout <<"Please provide X, Y, Z values: \n";
    cin >> x >> y >> z;
}

void Point::print() 
{  
    cout << "The x value is: "<<x<< "\n""The y value is: "<<y<< "\n""The z value is: "<<z<< "\n"; 
} 
 
double Point::norm() 
{  
    norm_vals = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    return norm_vals;
} 

void Point::negate() 
{  
    x = x*(-1);
    y = y*(-1);
    z = z*(-1);
}

void Point::setX(float x_value)
{
    x = x_value;
}

void Point::setY(float y_value)
{
    y = y_value;
}

void Point::setZ(float z_value)
{
    z = z_value;
}

