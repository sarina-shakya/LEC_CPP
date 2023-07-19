#include<iostream>
using namespace std;
class Student{
    private:
        char name[20];
        int roll;
    public:
        void getdata(){
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter roll:";
            cin>>roll;
        }
        void showdata(){
            cout<<"Name:"<<name<<endl;
            cout<<"Roll:"<<roll<<endl;
        }
};
class Test : public Student{
    private:
        char subject[25];
    public:
        void getdata(){
            Student :: getdata();
            cout<<"Enter subject name: ";
            cin>>subject;
        }
        void showdata(){
            Student :: showdata();
            cout<<"Subject: "<<subject<<endl;
        }
};
class Result : public Test{
    private:
        double marks;
    public:
        void getdata(){
            Test :: getdata();
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void showdata(){
            Test :: showdata();
            cout<<"Marks: "<<marks<<endl;
            
        }
};
int main(){
    Result res;
    cout<<"Enter information on student result: "<<endl;
    res.getdata();

    cout<<"Information on result of student: "<<endl;
    res.showdata();
}