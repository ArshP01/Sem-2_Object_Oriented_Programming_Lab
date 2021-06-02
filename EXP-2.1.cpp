/* The normal speed of a vehicle is less than 65kmph. If entered speed is less than 65kmph you can print within
 * speed limit otherwise over speed limit. */

#include <iostream>
using namespace std;

int main()
{
    int normal_speed = 65;
    int speed;
    cout<<"Enter current Speed: ";
    cin>>speed;
    if(speed<=normal_speed)
        cout<<"Within Speed Limit";
    else
        cout<<"Over Speed Limit"<<endl;
    return 0;
}
