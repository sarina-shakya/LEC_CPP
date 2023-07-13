#include<iostream>
using namespace std;
class student{
    protected:                          //private:
        char name[10];
        int ID;
    public:
        void getdata(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter ID: ";
            cin>>ID;
        }
        void showdata(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<ID<<endl;
        }
};
class leader:public student{
    private:
        char union_name[25];
    public:
        void getdata(){
            cout<<"Enter name: ";             //student::getdata();
            cin>>name;
            cout<<"Enter ID: ";
            cin>>ID;
            cout<<"Enter name of union: ";      //to access private members of base class,public function are used
            cin>>union_name;
        }
        void showdata(){
            cout<<"Name: "<<name<<endl;         //
            cout<<"ID: "<<ID<<endl;
            cout<<"Name of union : "<<union_name<<endl;         //
        }
};
int main(){
    leader led;
    cout<<"Enter data of leader: "<<endl;
    led.getdata();
    cout<<"Data of leader is: "<<endl;
    led.showdata();
}