// Tutorial 7 task1
// Paula Villa Fulton
 
#include <iostream> 
#include <fstream> 
#include <cstdlib>
#include <iomanip>
 
using namespace std; 
 
main () 
{   
    char file_name [20];
    double value, n, i;

    cout <<"Please enter a file name: ";
    cin >> file_name;

    // open txt file for writing         
    ofstream mystream;
    mystream.open(file_name);      

    if (! mystream)  // give error if it did not open correctly   
    {         
        cout << "Can't open file" << file_name ;         
        exit (0);       
    } 
 
    cout <<"Please indicate how many float numbers you want to enter: ";
    cin >> n ;
    
    for (i = 1 ; i <= n ; i++)
    {
        cout << "Please enter a number: ";
        cin >> value;
        
        // write to file
        mystream << setiosflags (ios::fixed) << std::setw(7) // numbers are at least 6 digits long
        << std::setfill('0') << std::setprecision(2)<< value<< "\n"; // two digits after the comma
    }
    // close my file stream
    mystream.close(); 

    // confirm completion
    cout <<"Your numbers have been saved.";
    return 0;
}




