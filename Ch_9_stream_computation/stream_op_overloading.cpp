#include<iostream>
using namespace std;

class student{
    int age;    
    
    public:
        student(){
            age=25;
        }
        friend istream& operator>>(istream input, student& obj);
        friend ostream& operator<<(ostream output, student& obj);
};

istream& operator>>(istream& input, student& obj){
    input>>obj.age;
    return input;
}
//1st param-passing the reference of ostream type
//2nd param-object of our own class as second param i.e obj
ostream& operator<<(ostream& output, student& obj){
    output<<obj.age<<endl;
    return output;
}

int main(){
    student s;
    //operator<<(cout,s)
    //cout<<obj.s
    cout<<s;

    //operator<<(cin,s)
    //cin<<obj.s
    cin>>s;
    return 0;

}