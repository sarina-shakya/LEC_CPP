#include<iostream>
using namespace std;
int main()
{
    int Months;
    cout<<"Enter the name of months:";
    cin>>Months;
    cout<<"The month is ";
    switch(Months)
    {
        case 1:
            cout<<"March";
            break;
        case 2:
            cout<<"June";
            break;
        case 3:
            cout<<"November";
            break;
        case 4:
            cout<<"May";
            break;
        default:
            cout<<"not on the list.";
    }
    return 0;
}