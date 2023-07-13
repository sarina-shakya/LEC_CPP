#include<iostream>
using namespace std;
class base{
    public:
    base(int data)
    {
        cout<<"parameterized constructor from base class"<<endl;
    }
};
class derived:public base 
{
public:
derived(int data):base(data)
{
    cout<<"parameterized constructor from derived class";
}
};
int main()
{
    derived d(5);
}