// Tutorial 7 task2
// Paula Villa Fulton

#include <iostream> 
#include <fstream> 
#include <cstdlib>
#include <iomanip>
#include <bits/stdc++.h> 

using namespace std;

int main ()
{
    ifstream instream;
    ofstream outstream;

    int counter = 0, count = 0;
    float input_value[20], number, i, sum = 0, average, max = INT_MIN, min = INT_MAX;
    char file_name [20];

    cout <<"Please enter a file name: ";
    cin >> file_name;

    // open txt file for reading         
    instream.open(file_name);      
    if (! instream)  // give error if it did not open correctly   
    {         
        cout << "Can't open file " << file_name ;         
        exit (0);     
    }

    outstream.open("output.txt");
    if (! outstream)  // give error if it did not open correctly   
    {         
        cout << "Can't open file " << file_name ;         
        exit (0);     
    }

    // read data into array
    while (!instream.eof())
    {    
        // sum together all values
        instream >> number;
        sum += number;
        
        if (number < min){
           min = number;
        }
          if (number > max){
           max = number;
        }
        counter++; 
    }

    // calculate average
    average = sum/counter;

    // print to file
	outstream << setiosflags (ios::fixed) << std::setw(7) << setprecision(3) 
    << "The smallest number is "<<min<<endl 
    <<"The largest number is "<<max<<endl 
    <<"The average file in file test was "<<average<<endl;
	
    // print to console
    cout << setiosflags (ios::fixed) << std::setw(7) << setprecision(3) << "The smallest number is "<<min << "\n";
    cout << setiosflags (ios::fixed) << std::setw(7) << setprecision(3) << "The largest number is "<<max << "\n";
    cout << setiosflags (ios::fixed) << std::setw(7) << setprecision(3) << "The average file in file test was "<<average << "\n";

	
	instream.close();
	outstream.close();

    return 0;
}
    
