#include<iostream>
using namespace std;

class Mobile
{
    private:
        int m=10;
    public:
        void display()
        {
            cout<<"Value of m is "<<m<<endl;
            cout<<"Value of ? is "<<this->m<<endl;
            cout<<"The address of current object is "<<this<<endl;
   }
};

int main()
{
    Mobile m1,m2;
    m1.display();
    m2.display();
    return 0;
}