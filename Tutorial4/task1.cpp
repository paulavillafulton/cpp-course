#include <iostream>


using namespace std;

int main()
{   
    float number1, number2, number3, liters, pints;
    const float CONVERSION_RATE = 1.76;

    cout << "Please enter the start amount of liters:"; 
    cin >> number1;

    cout << "Please enter the end amount of liters:"; 
    cin >> number2;

    cout << "Please enter the intervals:"; 
    cin >> number3;

    // print table header
    cout << "LITERS \t PINTS \n==============\n";

    // calculate and print table entries     
    for(liters = number1 ; liters <= number2 ; liters += number3)      
    {         
        pints = CONVERSION_RATE * liters; 
 
        cout << liters << "\t     " << pints << "\n";     
    }     
    return 0;
}
