#include<iostream>
using namespace std;
int main(){
    const int x=25;
    const int y=20;     1//x=x+10;      //error
    int z;
    z=x+y;
    cout<<"The sum of x and y is "<<z<<endl;
    return 0;
}