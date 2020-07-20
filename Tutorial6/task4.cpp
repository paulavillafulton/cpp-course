#include<stdio.h>

void time(int, int &hours, int &mins, int &secs);

int main(void) 
{
    int total, hours, mins, secs;

    printf("Enter the number of seconds: \n");
    scanf("%d", &total);

    time(total, hours, mins, secs);
    printf("The number of hours is %d\n", hours);
    printf("The number of minutes is %d\n", mins);
    printf("The number of seconds is %d\n", secs);

    return 0;
}

void time(int total, int &hours, int &mins, int &secs) {

    int rem1;
    hours = total / 3600;
    rem1 = total % 3600;
    mins = rem1 / 60;
    secs = rem1 % 60;
}