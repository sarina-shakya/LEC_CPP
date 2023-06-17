#include<iostream>
using namespace std;

class Student{
    private:
        char name[8];
        int roll;
    public:
      
        void showvalue()
        {
            cout<<"Enter information: "<<endl;
            cout<<"The name of student is "<<endl;
            cin>>name;
            cout<<"The roll number is "<<endl;
            cin>>roll;
            
        } 

        
};
int main()
{
    Student S1[5],name,roll;
    int i,n;
    cout<<"Information "<<endl;
    cout<<"Name of student is "<<endl;
    cout<<"Roll of student is "<<endl;
    
    for(i=0;i<n;i++)
    {
        cout<<"\n Data"<<i+1<<endl;
        S1[i].showvalue();
    }
}