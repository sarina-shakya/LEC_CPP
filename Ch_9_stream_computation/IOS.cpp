#include<iostream>
using namespace std;

void IOS_fill()
{
    cout<<"\n________________\n";
    cout<<"Implementing ios::fill\n\n";
    
}
int main(){
    char ch = 'a';

    cout.fill('+');
    cout.width(10);
    cout<<ch<<"\n";

    int i = 1;
}