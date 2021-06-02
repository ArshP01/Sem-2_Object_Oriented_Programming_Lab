#include <iostream>
using namespace std;
int main()
{
    int amount, year;
    float rate, total;

    cout<<"Enter initial amount: ";
    cin>>amount;
    cout<<"Enter number of years: ";
    cin>>year;
    cout<<"Enter interest rate (percent per year): ";
    cin>>rate;
    rate = rate / 100;
    total = amount;

    for(int i=0; i<year; i++)
    {
        total = total + (total * rate);
    }

    cout<<"At the end of "<<year<<" years you will have "<<total<<" rupees";

    return 0;
}