#include<iostream>
using namespace std;

void swap(int &num1, int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
int getnum(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    return a;
}

int main()
{
    int num1=getnum();
    int num2=getnum();
    cout<<"Values before swap:"<<num1<<","<<num2;
    swap(num1,num2);
    cout<<"\nValues after swap:"<<num1<<","<<num2;
}