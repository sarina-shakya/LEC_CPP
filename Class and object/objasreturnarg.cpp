#include<iostream>
using namespace std;

class Student
{
    public:
    double marks1,marks2;

};
Student getStudent()
{
    Student S;
    S.marks1=70.5;
    S.marks2=67.5;

    cout<<"The marks of first student is: "<<S.marks1;
    cout<<"\nThe marks of second student is:"<<S.marks2;

    return S;
}

int main()
{
    Student S1;                                                         
    S1=getStudent();
    return 0;
}