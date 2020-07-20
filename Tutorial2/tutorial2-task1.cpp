// Program which converts a given temperature from Fahrenheit degrees into 
// Celsius according to a user specified input

#include <iostream> 
 
using namespace std; 
 
int main()
{   
    // VARIABLE DECLARATION 
    float celsius, fahrenheit;  

    //INPUT PHASE 
    cout << "Enter a temperature in Fahrenheit:"; 
    cin >> fahrenheit; 
 
    //CALCULATION PHASE 
    celsius = ((fahrenheit-32)*5)/9; 
 
    //OUTPUT PHASE 
    cout << "\n The celsius equivalent temp is: " <<celsius<< "\n";  

    return 0;
}
