#include <iostream>
#include <stdlib.h> 

using namespace std;

int main()
{    
    float income, tax, keep;

    cout << "Enter the amount of money: ";
    cin >> income;

    if (income <= 7500.00)
    {
        cout << "Too poor for tax ...\n";
    } 
    else if (income <= 16000.00)
    {
        tax = (income - 7500.00) * 0.19;
        keep = income - tax;
        cout << "Amount of tax:" <<tax<< "\n";
        cout << "You can keep " <<keep<< " of your income.\n";
    }
    else if ((income > 16000.00) && (income < 25000.00))
    {
        tax = (income - 7500.00) * 0.35;
        keep = income - tax;
        cout << "Amount of tax:" <<tax<< "\n";
        cout << "You can keep " <<keep<< " of your income.\n";
    }
    else
    {
        tax = (income - 7500.00) * 0.40;
        keep = income - tax;
        cout << "Amount of tax:" <<tax<< "\n";
        cout << "You can keep " <<keep<< " of your income.\n";
    }
    
    return 0;
}
