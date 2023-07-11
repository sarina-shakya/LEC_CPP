#include<iostream>
using namespace std;
class Base{
    private:
    char name[20];

    public:
    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
    }
    void showdata(){
        cout<<"Name: "<<name<<endl;
    }
};
class child : public Base{
    private:
    int ID;

    public:
    void getdata(){
        Base::getdata();
        cout<<"Enter ID: ";
        cin>>ID;
    }
    void showdata(){
        Base::showdata();
        cout<<"ID: "<<ID<<endl;
    }
};
int main(){
    child c1;
    c1.getdata();
    c1.showdata();
}
