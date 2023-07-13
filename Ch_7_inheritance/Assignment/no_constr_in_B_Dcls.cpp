#include<iostream>
using namespace std;
class base
{
    // no constructor
};
class derived:public base{
    public:
    void message()
    {
        cout<<"No costructor in base and derived class";
    }
};
int main()
{
    derived d;
    d.message();
}