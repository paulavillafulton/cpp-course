#include <iostream>
using namespace std;

struct numbers {
    float number1, number2;
};

void swap(numbers &t);

int main() 
{
    struct numbers t;
    t.number1 = 10, t.number2 = 12;

    cout << "Before swapping:\n";
    cout << t.number1 <<" "<< t.number2 << "\n";

    swap(t); // Call function swap
    cout << "After swapping:\n";
    cout << t.number1 << " " << t.number2 << "\n";

    return 0;
}

void swap(numbers &t) 
{
    float temp;

    temp = t.number1;
    t.number1 = t.number2;
    t.number2 = temp;
}