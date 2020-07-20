


class Point 
{  
    public:
    Point (float x, float y, float z)
    {
        coordx = x;
        coordy = y;
        coordz = z;
    }

    float coordx, coordy, coordz;
    double norm (); // norm
    void negate ();  // negate element 
    void print ();  // print as a function
    void set();
    
};