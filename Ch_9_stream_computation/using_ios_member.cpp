#include<iostream>
using namespace std;

void IOS_width(){
    cout<<"----------------\n";
    cout<<"Implementing ios::width\n";

    char c = 'A'

    //adjusting width will be 5
    cout.width(11);
    cout<<c<<"\n";

    int temp=10;
    cout.width(11);
    cout<<temp;
    cout<<"\n-----------------\n";
}

void IOS_precision(){
    cout<<"\n-----------------\n";
    cout<<"Implementing ios::precision\n";
    cout<<"Implementing ios::width";

    //makes cout print float with fixed no of decimals
    //cout print float with ...
    //sets this no to be as mentioned
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    cout<<3.1422;
    cout<<"\n-----------------\n";
}