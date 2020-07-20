#include <iostream>
#include <stdlib.h> 

using namespace std;

int main()
{    
    int number1 = 0, number2 = 0, result = 0;

    cout << "Enter Number 1: ";
    cin >> number1;

    cout << "Enter Number 2: ";
    cin >> number2;

    if (number1 >= number2)
        result = number1 - number2;

    else
        result = number2 - number1;
        
    cout << "Result: " <<result<< "\n";
    
    return 0;
}
