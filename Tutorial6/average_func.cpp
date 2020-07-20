// Exercise 6
// Task1 average_func.h
#include <iostream>
#include "average_func.h"

using namespace std;
 
float average_func(float num1, float num2)
{ 
    float avg_number;
    const float CONSTANT = 2;

    avg_number = (num1 + num2) / CONSTANT; // Calculate the average of two numbers
    return(avg_number);
}