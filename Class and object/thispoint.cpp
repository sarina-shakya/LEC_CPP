#include<iostream>
using namespace std;

class a{
    int x;

    public:
    void getnum(int x)
    {
       this->x=x;
    }
    void shownum()
    {
        cout<<"This is number "<<x<<endl;
    }

};

int main()
{
    a obj1,obj2;
    obj1.getnum(2);
    obj1.shownum();

    obj2.getnum(8);
    obj2.shownum();
    return 0;

}
