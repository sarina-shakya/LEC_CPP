#include<iostream>
using namespace std;
class A
{
    public:
    int data;

    void getdata()
    {
        cout<<"Enter the value of data:";
        cin>>data;
    }
    void showdata()
    {
        cout<<"\nThe value of data is:"<<data;
    }
};

class B
{
    public:
    A a;                            //or class A a;
    int b;

    void getdata()
    {
        a.getdata();
        cout<<"Enter the value of b:";
        cin>>b;
        
    }
    void showdata()
    {
        a.showdata();
        cout<<"\nThe value of b is:"<<b;
        
    }
};
int main()
{
    B b;                                //class B b;
    b.getdata();
    b.showdata();
    return 0;
}