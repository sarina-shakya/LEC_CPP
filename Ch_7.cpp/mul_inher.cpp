#include<iostream>
using namespace std;
class student{
    private:
        char name[15];
    public:
        void getdata(){
            cout<<"Enter name: ";
            cin>>name;
        }
        void showdata(){
            cout<<"Name: "<<name<<endl;
        }
};
class employee{
    private:
        char org_name[25];
    public:
        void getdata(){
            cout<<"Enter name of organization: ";
            cin>>org_name;
        }
        void showdata(){
            cout<<"Name of org: "<<org_name<<endl;
        }
};
class officer:public student,public employee
{
    private:
        int working_hour;
    public:
        void getdata(){
            student::getdata();
            employee::getdata();
            cout<<"Enter working hours: ";
            cin>>working_hour;
        }
        void showdata(){
            student::showdata();
            employee::showdata();
            cout<<"Working hour: "<<working_hour<<endl;

        }
};
int main(){
    officer o1;
    cout<<"Enter data of ofiicer"<<endl;
    o1.getdata();
    cout<<"Data of officer "<<endl;
    o1.showdata();
}