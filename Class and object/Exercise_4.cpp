#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        char name[20];
        char phone[10];
    public:
        void getdata();
        void showdata();
    
};
inline void student::getdata()//function definition
{
            cout<<"\nEnter roll no:";
            cin>>roll;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter phone number:";
            cin>>phone;
}
inline void student::showdata()
{
            cout<<"Name:"<<name<<endl;
            cout<<"Roll no:"<<roll<<endl;
            cout<<"Phone number:"<<phone<<endl;
}
int main()
        {
            student s1,s2;
            s1.getdata();
            s2.getdata();
            cout<<"first student"<<endl;
            s1.showdata();
            cout<<"second student"<<endl;
            s2.showdata();
            return 0;
        }