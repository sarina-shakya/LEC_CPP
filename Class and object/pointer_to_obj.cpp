#include<iostream>
using namespace std;
class employee
{
    private:
    char name[25];
    float salary;

    public:
    void getdata()
    {
        cout<<"\nEnter name: ";
        cin>>name;                                             
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Salary: "<<salary;
    }
};
int main()
{
    employee *eptr;
    employee e;
    eptr =&e;
    eptr ->getdata();
    cout<<"\nAccessing data through pointer variable: ";
    eptr ->showdata();
    return 0;
}
