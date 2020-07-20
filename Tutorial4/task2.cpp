#include <iostream> 

using namespace std;

int main()
{   
    int input1, input2, input3, input4, minutes, start_time, end_time, RED, GREEN, 
        YELLOW, ORANGE, BLUE, red, green, yellow, orange, blue;
    const int STOP = 2, LOWER_LIMIT = 0000, UPPER_LIMIT = 2400; // 24hour clock limits
      

    do {
        cout << "Enter journey time (minutes)\n";             
        cin >> input1;  

    } while ((input1 < 1) || (input1 > 60));

    do {
        cout << "Enter first train time\n";             
        cin >> input2;

        start_time = ((input2/100) * 60) + (input2%100); // convert to minutes

    } while ( input2 <= LOWER_LIMIT || input2 >= UPPER_LIMIT );

    do {
        cout << "Enter last train time\n";             
        cin >> input3;

        end_time = ((input3/100) * 60) + (input3%100); // convert to minutes

    } while ((input3 <= LOWER_LIMIT || input3 >= UPPER_LIMIT) || (input3 < input2));

    do {
        cout << "Enter the frequency time\n";             
        cin >> input4;
    } while ( input4 < 0 );
    
    //print table header     
    cout << "Depart\tDepart\tDepart\tDepart\tArrive\nRED\tGREEN\tYELLOW\tORANGE\tBLUE\n";  

    // calculate and print table entries    
    for ( minutes = start_time ; minutes <= end_time ; minutes += input4 )      
    {         
        red = minutes; 
        green = red + STOP + input4;
        yellow = green + STOP + input4;
        orange = yellow + STOP + input4;
        blue = orange + input4;

        // convert back to hours
        RED = ((red/60)*100) + (red%60);
        GREEN = ((green/60)*100) + (green%60);
        YELLOW = ((yellow/60)*100) + (yellow%60);
        ORANGE = ((orange/60)*100) + (orange%60);
        BLUE = ((blue/60)*100) + (blue%60);
    
    // print out
    cout << RED << "\t" << GREEN << "\t" << YELLOW << "\t" << ORANGE<< "\t" << BLUE << "\n";
    }
} 