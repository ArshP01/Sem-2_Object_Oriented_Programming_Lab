#include <iostream>
#include <string>

using namespace std;

class employee
{
public:
    void getdata();
    void putdata();
private:
    string name;
    long number;
};

void employee::getdata()
{
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee number: ";
    cin >> number;
}

void employee::putdata()
{
    cout << "Employee name is: " << name << endl;
    cout << "Employee number is: " << number << endl;
}

int main()
{
    employee first;
    first.getdata();
    cout << endl;
    first.putdata();
    cout << endl;
    return 0;
}