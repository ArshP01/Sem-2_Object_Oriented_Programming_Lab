#include<iostream>
#include<string>

using namespace std;
class employee
{
private:
    char name[50];
    long no;

public:
    employee():no(0)
    { }

    void getdata()
    {
        fflush(stdin);
        cout<<"\nEnter Employee Data:\n";
        cout<<"Enter Name: ";
        cin.get(name,50);
        fflush(stdin);
        cout<<"Enter Number: ";
        cin>>no;
        fflush(stdin);
    }

    void putdata()
    {
        cout<<"\n\nName= "<<name<<"\nE.number = "<<no<<endl;
    }

};

int main()
{
    int array_length = 3;
    employee e1[array_length];

    for(int i=0;i<array_length;i++){
        e1[i].getdata();
        fflush(stdin);
    }

    for(int i=0;i<array_length;i++){
        e1[i].putdata();
    }

    cout<<"\n\nPress any key to close.";
    return 0;
}