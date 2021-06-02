#include <iostream>
using namespace std;

int main()
{
    int guests,chairs;
    int result=1;
    cout<<"Enter number of Guests: ";
    cin>>guests;
    cout<<"Enter number of Chairs: ";
    cin>>chairs;

    for (int i=guests; i > (guests-chairs); i--)
        result *= i;
    cout<<"Number of possible arrangements: ";
    cout<<result<<endl;

    return 0;
}