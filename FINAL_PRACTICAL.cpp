#include <iostream>
using namespace std;

int area(float base, float height){
    return (base*height)/2;
}
int area(float radius){
    return 3.14*radius*radius;
}
int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth;
    float radius, base, height;

    cout << "Enter the base of triangle: ";
    cin >> base;
    cout << "Enter the height of triangle: ";
    cin >> height;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout << "Enter the breadth of rectangle: ";
    cin >> breadth;

    cout<<"\nArea of triangle is "<<area(base,height);
    cout<<"\nArea of circle is "<<area(radius);
    cout<<"\nArea of rectangle is "<<area(length,breadth);
}