#include<iostream>
using namespace std;
int main()
{
    string sub[]={"OOP","TOC","Maths","DL","EM"};
    int i,total=0;
    int marks[5];
    for(i=0;i<5;i++)
    {
        cout<<"Enter marks of subject "<<sub[i]<<":";
        cin>>marks[i];
    }
    for(i=0;i<5;i++)
        total+=marks[i];
    cout<<"Total marks= "<<total;
    return 0;
}