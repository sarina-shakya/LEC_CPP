#include<iostream>
using namespace std;

int main(){
    int a,b;   //a=5 b=3
    cout<<"Enter values of a and b: "<<endl;    //
    cin>>a>>b;  //
    int x=a / (a-b);
    cout<<"Value of x is: "<<x<<endl;
    return 0;
}