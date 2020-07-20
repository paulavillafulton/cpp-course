// Tutorial 5 
// Task1
#include <iostream>
using namespace std;

int main()
{
    const int n = 20;
    float sequence[n], averarray[n];
    int i;
    
    cout << "The first "<< n << " Fibonacci series numbers are: \n";

    // My first two terms are 1
    sequence[0]=1;
    sequence[1]=1;
    cout <<sequence[0] << "\n" <<sequence[1] << "\n";

// for loop for the Fibonaci Sequence
    for (i = 2; i < n; i++)
    {
       // Calculate
        sequence[i] = sequence[i-1] + sequence[i-2];
        // Output
        cout <<sequence[i] << "\n";
    }
    cout << "The average adjacent array numbers are: \n";
// for loop for the average of consecutive values
    for (i = 0; i < n-1; i++)
    {
        // Calculate
        averarray[i] = (sequence[i] + sequence[i+1])/2;
        // Output
        cout <<averarray[i] << "\n";
    }
    return 0;
}