#include <iostream>
using namespace std;
class Student
{
public:
    char name[40];
    int roll;
    int age;

    void attendance(){
        cout<<"present";
    }
    void assignment(){
        cout<<"assignment submitted";
    }
};
int main(){
    Student S1,S2;
    S1.attendance();
    S1.age=19;
    S2.assignment();
    S2.roll;
    return 0;
}
