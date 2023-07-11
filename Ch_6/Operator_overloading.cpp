#include<iostream>
using namespace std;
class Operator
{
  int a ,b ,c;
 
 public:
 Operator(int x,int y,int z)
 {
   a=x;
   b=y;
   c=z;
 }

 void operator -()
 {
    a=-a;
    b=-b;
    c=-c;
 }

 void showdata()
{
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
}
};
int main()
{
    Operator a(-5,-10,-15);
    -a;
    a.showdata();
    

   return 0;
}