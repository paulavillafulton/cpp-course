#include<stdio.h>
#include <iostream>
using namespace std;

void time(int, int*, int*, int*);

int main(void) {

    int total, hours, mins, secs;

    cout <<"Enter the number of seconds: \n";
    cin >> &total >> ;

    time(total, &hours, &mins, &secs);
    cout <<"The number of hours is " << hours << "\n";
    cout <<"The number of minutes is " << mins << "\n";
    cout <<"The number of seconds is " << secs << "\n";

    return 0;
}

void time(int total, int *hours, int *min, int *sec) {

    int rem1;
    *hours = total / 3600;
    rem1 = total % 3600;
    *min = rem1 / 60;
    *sec = rem1 % 60;
}