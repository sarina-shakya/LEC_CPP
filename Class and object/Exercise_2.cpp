#include<iostream>
using namespace std;
class Student
{
    private:
        int roll;
        char name[30];
        char phone[20];
    public:
        void getdata()
        {
            cout<<"\nEnter roll no:";
            cin>>roll;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter phone number:";
            cin>>phone;
        }
        void showdata()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Roll no:"<<roll<<endl;
            cout<<"Phone number:"<<phone<<endl;
        }
};//end of class
int main()
{
    Student S1,S2;
    S1.getdata();
    S2.getdata();
    cout<<"first student"<<endl;
    S1.showdata();
    cout<<"second student"<<endl;
    S2.showdata();
    return 0;
}