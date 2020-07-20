// Tutorial 5 
// Task2
#include <iostream>
using namespace std;

//Declare structure- create new data type called time  
struct time{ 
    int hours, minutes, seconds;
    };

int main()
{
    int i, totalhours, totalminutes, totalseconds;
    float h, s, m, m1, h1;
    time times1, times2, resultant;

    //Declare variable of type time
    for (i = 1 ; i <= 2; i++)
    {
        cout << "Please enter the hours for time "<<i<<": \t";
        if (i==1) 
        {   cin >>  times1.hours;}
        else 
        {   cin >>  times2.hours;}

        cout << "Please enter the minutes for time "<<i<<": \t";  
        if (i==1)
        {   cin >>  times1.minutes;}
        else 
        {   cin >>  times2.minutes;}

        cout << "Please enter the seconds for time "<<i<<": \t";  
        if (i==1) 
        {   cin >>  times1.seconds;}
        else 
        {   cin >>  times2.seconds;}

        cout << "\n";  
    }

    // calculate total times;

    totalseconds = times1.seconds + times2.seconds;
    totalminutes = times1.minutes + times2.minutes;
    totalhours = times1.hours + times2.hours;
    
    // convert seconds
    if ( totalseconds > 60 )
    { 
        m1 = totalseconds/60;
        resultant.seconds = totalseconds%60;}
    else
    {
        resultant.seconds = totalseconds;}  

    // convert minutes
    if ( totalminutes + m1 > 60 )
    { 
        h1 = totalminutes/60;
        resultant.minutes = totalminutes%60;}
    else
    {
        resultant.minutes = totalminutes + m1;}  
    
    // convert hours 
    if ( totalhours + h1 >= 24 )
    { 
        resultant.hours = (totalhours + h1) - 24;}
    else
    {
        resultant.hours = totalhours + h1;}  

    // print
    cout << "The total time is " <<resultant.hours<< ":" << resultant.minutes<< ":" << resultant.seconds << "\n";
    
    return 0;
}