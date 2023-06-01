#include<iostream>
using namespace std;

class Student
{
    public:
    double marks;
    
    Student(double m)  //constructor
    {
        marks=m;
    } 
};

void calculateAverage(Student S1,Student S2)
{
    double average = (S1.marks + S2.marks)/2;
    cout<<"The average marks is:"<<average<<endl;                      //objectasreturnargument
}                                                                //complex number
int main()
{
    Student S1(600.8),S2(800.5);
    calculateAverage(S1,S2);
    return 0;
}


