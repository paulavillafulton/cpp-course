// Program which converts a given temperature from Fahrenheit degrees into 
// Celsius according to a user specified input

#include <iostream> 
 
using namespace std; 
 
int main() 
{   
    // VARIABLE DECLARATION 
    float cpr, ppr, copr, popr, bill;
    
    // CONSTANTS
    const float OFFPEAK = 0.022; // off-peak: cents/unit
    const float PEAK = 0.056; // peak: cents/unit
    const float STANDING_CHARGE = 8.5; // euros/bill

    //INPUT PHASE 
    cout << "Enter current peak meter readings:"; 
    cin >> cpr; 

    cout << "Enter past peak meter readings:"; 
    cin >> ppr; 
    
    cout << "Enter current off-peak meter readings:"; 
    cin >> copr;     
    
    cout << "Enter past off-peak meter readings:"; 
    cin >> popr;
    //CALCULATION PHASE 
    bill = PEAK*(cpr - ppr) + OFFPEAK*(copr - popr) + STANDING_CHARGE;
     
    //OUTPUT PHASE
    cout << "\n Your electricity bill is: " << bill<< " Euros\n"; 
    return 0;
}
