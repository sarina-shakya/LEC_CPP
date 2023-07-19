#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area()=0;
    void display()
    {
        cout<<"This is virtual class"<<endl;
    }
};
class square:public shape
{
    public:
    void display()
    {
        shape::display();
        cout<<"This is square class"<<endl;
    }
};
int main()
{
    shape *s1;
    square *s2;
    s2->display();
   return 0;
}