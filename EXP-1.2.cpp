/* You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and adding 32. Write a
 * program that allows the user to enter a floating-point number representing degrees Celsius, and then displays the
 * corresponding degrees Fahrenheit.*/
#include <iostream>
using namespace std;

int main()
{
    float cel, fah;
    cout<<"Enter Temperature in celsius: ";
    cin>>cel;
    fah = (cel * 9/5) + 32;
    cout<<"Temperature in Fahrenheit: "<<fah<<endl;
    return 0;
}
