#include<iostream>
using namespace std;
class base_one
{
    public:
    base_one()
    {
        cout<<"base_1 class constructor"<<endl;
    }
};
class base_two
{
    public:
    base_two()
    {
        cout<<"base_2 class constructor"<<endl;
    }
};
class derived:public base_two,public base_one
{
    public:
    derived()
    {
        cout<<"derived class constructor"<<endl;
    }
};
int main()
{
    derived d;
   return 0;
}