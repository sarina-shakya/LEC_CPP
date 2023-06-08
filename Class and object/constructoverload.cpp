#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    public:
    Student(){
        roll=3;
    }
    Student(int x){
        roll=x;
    }
    int getRoll(){
        return roll;
    }
};
int main(){
    Student S1,S2(5);
    cout<<"Student S1's roll number is:"<<S1.getRoll()<<endl;
    cout<<"Student S2's roll number is:"<<S2.getRoll()<<endl;

    return 0;
}