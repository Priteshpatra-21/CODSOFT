#include <iostream>
using namespace std;

void showOption()
{
    int choice;
    cout<< "Choose an option from below." <<endl;
    cout<< "1 for Addition (+)" <<endl;
    cout<< "2 for Subtraction (-)" <<endl;
    cout<< "3 for multiplication (*)" <<endl;
    cout<< "4 for division (/)" <<endl;
    cout<< "Enter your choice: ";
}

int main()
{
    int choice;
    double number1, number2, result;
    cout<< "Enter first number: ";
    cin>> number1;
    cout<< "Enter second number: ";
    cin>> number2;

    showOption();
    cin>> choice;

    switch(choice)
    {
        case 1:
            result = number1 + number2;
            cout<< " Result of " <<number1<< " + " <<number2<< " = " << result;
            break;

        case 2:
            result = number1 - number2;
            cout<< " Result of " <<number1<< " - " <<number2<< " = " << result;
            break;
        
        case 3:
            result = number1 * number2;
            cout<< " Result of " <<number1<< " * " <<number2<< " = " << result;
            break;

        case 4:
            if(number2 == 0)
                cout<< "Error in dividing with 0";
            else
                result = number1 / number2;
            cout<< " Result of " <<number1<< " / " <<number2<< " = " << result;
            break;

        default:
            cout<< "Invalid choice. Try again.";
            break;
    }
    return 0;    
}