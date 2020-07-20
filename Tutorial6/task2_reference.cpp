// Extercise 6
// Task 2
// By reference

#include <iostream>
using namespace std;

void swap(int *, int *);
main()
{
    int a = 10, b = 20;
    cout << "Before swapping:\n";
    cout << a <<" "<< b << "\n";

    swap(&a,&b);  
    cout << "After swapping:\n";
    cout << a << " " << b; 
}  
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    // printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10   
}  