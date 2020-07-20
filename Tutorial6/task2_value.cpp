// Exercise 6
// Task2
// by value

#include <iostream>
using namespace std;

struct swapper
{
    int value1, value2;
};

//function declaration
struct swapper swap(int, int);

main()
{
    swapper abswapper;

    int a = 10, b = 12;
    cout << "Before swapping:\n";
    cout << a <<" "<< b << "\n";
    abswapper = swap (a,b); // Call function swap
    a = abswapper.value1;
    b = abswapper.value2; 
    cout << "After swapping:\n";
    cout << a << " " << b;
}
//function definition
struct swapper swap(int a, int b)
{
    swapper abswapper;

    abswapper.value1 = b;
    abswapper.value2 = a;

    return abswapper;
}