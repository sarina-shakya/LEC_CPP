#include<iostream>
using namespace std;
namespace n1 {
int x = 2;

void fun()
    {
        cout << "This is fun() of n1"<< endl;
    }
}

namespace n2{
int x = 5;

//Function to display the message
void fun()
    {
        cout << "This is fun() of n2"<<endl; 
    }
}

//Driver code
int main()
{
    cout<<n1::x <<endl;

    //Function call
    n1::fun();

    cout<< n2::x <<endl;

    //Function call
    n2::fun();

    return 0;

}

