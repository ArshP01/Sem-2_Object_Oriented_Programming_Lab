#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned long number;
    cout<<"Enter a Number: ";
    cin>>number;
    for(int j = 1; j <= 200; j++)
    {
        cout<<setw(5)<<j*number<<"  ";
        if(j % 10 == 0)
            cout<<endl;
    }

    return 0;
}