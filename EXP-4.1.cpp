#include <iostream>
#include <iomanip>
using namespace std;
struct employee
{
    int emp_num ;
    float emp_com ;
};
int main()
{
    employee emp1 ;
    employee emp2 ;
    employee emp3 ;

    cout << "Enter first employee number: " ;
    cin >> emp1.emp_num ;
    cout << "Enter first employee’s compensation: " ;
    cin >> emp1.emp_com ;
    cout << "Enter second employee number: " ;
    cin >> emp2.emp_num ;
    cout << "Enter second employee’s compensation: " ;
    cin >> emp2.emp_com ;
    cout << "Enter third employee number:" ;
    cin >> emp3.emp_num ;
    cout <<"Enter third employee’s compensation: " ;
    cin >> emp3.emp_com ;

    cout<<"\n";

    cout << setw(15) << "employee number" << setw(30) << "employee’s compensation" << endl ;
    cout << setw(15) << emp1.emp_num      << setw(30) << emp1.emp_com << endl ;
    cout << setw(15) << emp2.emp_num      << setw(30) << emp2.emp_com << endl ;
    cout << setw(15) << emp3.emp_num      << setw(30) << emp3.emp_com << endl ;
    cout << "" << endl;
    return 0;
}