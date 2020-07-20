// Tutorial 5
// Task 3
#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    float sequence[n];
    int i, j, temp;

    for (i = 0 ; i < n; i++)
    {
        cout << "Please enter an integer value for array index "<<i + 1<<": \n";
        cin >> sequence[i];
    }
// Sort - ASCENDING ORDER
    for (i = 0; i <= n; i++)
	{		
		for(j = i+1 ; j < n ; j++)
		{
			if(sequence[i] > sequence[j])
			{
				temp  = sequence[i];
				sequence[i] = sequence[j];
				sequence[j] = temp;
			}
		}
	}
// Print the sorted array
    cout << "The sorted array is: \n";
    for (i = 0; i < n; i++)
    {
        cout <<sequence[i] << "\n";
    }
}