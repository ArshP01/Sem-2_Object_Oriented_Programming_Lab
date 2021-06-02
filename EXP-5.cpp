#include <iostream>
using namespace std;
class Integer
{
private:
    int num,num1;
public:
    Integer()
    {}
    Integer(int n)
    {
        num=n;
    }

    int add(Integer Int1,Integer Int2)
    {
        num1=Int1.num+Int2.num;
        return num1;

    }
};
int main()
{
    int number;
    Integer Int1(72),Int2(45),Int3;
    number=Int3.add(Int1,Int2);
    cout<<"1st object number: "<<72<<"\n2nd object number: "<<45<<endl;
    cout<<"\n3rd object is sum of 1st and 2nd object: "<<number<<"\n";
}