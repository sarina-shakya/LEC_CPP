#include <iostream>
using namespace std;

namespace BEI{
char subject[20] = "Electronics";
int room = 401;

void printSubject()
    {
        cout<<subject<<endl;
    }

void printRoom()
    {
        cout<<room<<endl;
    }
}

namespace BCT{
char subject[30] = "Software Engineering";
int labRoom = 402;

void printSubject(){
        cout<<subject<<endl;
    }
void printLabRoom(){
        cout<<labRoom<<endl;
    }
}
int main()
{
    cout<<BEI::room <<endl;
    BEI::printSubject();

    cout<<BCT::labRoom <<endl;
    BCT::printSubject();
    
    
}

