/*Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of
 * gallons, and then displays the equivalent in cubic feet.*/

#include <iostream>
using namespace std;
int main()
{
    float gallons, cf;
    cout<<"Enter the quantity in Gallons: ";
    cin>>gallons;
    cf = gallons / 7.481;
    cout<<"Quantity in Cubic Feet is "<<cf<<endl;
    return 0;
}