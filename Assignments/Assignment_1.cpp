#include<iostream>
using namespace std;
class student
{
    private:
        string name;
        int roll;
    
   public:
        student()
        {
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter roll number:"<<endl;
            cin>>roll;
        }

        student(string name,int roll)
        {
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter roll number:"<<endl;
            cin>>roll;
        }
        void getdata()
        {
            cout<<"Enter name:"<<name<<endl;
            cout<<"Enter roll number:"<<roll<<endl;
        }
        void showdata();
};
void student :: showdata()
{
    cout<<"Name is :"<<name<<endl;
    cout<<"Roll is :"<<roll<<endl;
}

int main()
{
    student s1,s2;
    s1.showdata();
    s1.getdata();

    s2.getdata();
    s2.showdata();
}