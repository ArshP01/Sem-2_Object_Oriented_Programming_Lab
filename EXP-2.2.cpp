/* Create the equivalent of a four-function calculator. The program should request the user to enter a number, an
 * operator, and another number. (Use floating point) It should then carry out the specified arithmetical operation:
 * adding, subtracting, multiplying, or dividing the two numbers. Use a switch statement to select the operation.
 * Finally, display the result. When it finishes the calculation, the Batch 2019-2022 (Version 2019) Bachelor of
 * Computer Applications program should ask if the user wants to do another calculation. The response can be ‘y’ or ‘n’.
 * Some sample interaction with the program might look like this:.. */

#include <iostream>
using namespace std;

int main()
{
    double num1, num2, answer;
    char oper, ch;
    do
    {
        cout<<"\nEnter First number: ";
        cin>>num1;
        cout<<"Enter the Operator: ";
        cin>>oper;
        cout<<"Enter Second Number: ";
        cin>>num2;
        switch(oper)
        {
            case '+':
                answer = num1 + num2;
                break;

            case '-':
                answer = num1 - num2;
                break;

            case '*':
                answer = num1 * num2;
                break;

            case '/':
                answer = num1 / num2;
                break;

            default:
                cout<<"Error! Invalid Operator: \n";
        }
        cout<<"Answer = "<<answer;
        cout<<"\nAnother Calculation(y/n)? ";
        cin>>ch;
    }
    while(ch != 'n');
    return 0;
}