#include<iostream>
using namespace std;

class Friends
{
    private:
    char address[30];
    char phone[20];

    public:
    Friends()
    {
        cout<<"My friends address are:"<<endl;
        cin>>address;
        cout<<"My friends phone number are:"<<endl;
        cin>>phone;
    }

    void info(){
        cout<<"Address: "<<address<<endl;
        cout<<"Phone: "<<phone<<endl;
    }

};
int main(){
    Friends Ram,Gita,Sia;

    cout<<"Ram:"<<endl;
    Ram.info();

    cout<<"Gita:"<<endl;
    Gita.info();

    cout<<"Sia:"<<endl;
    Sia.info();

    return 0;
}