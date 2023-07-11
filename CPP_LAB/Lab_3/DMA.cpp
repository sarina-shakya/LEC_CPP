#include<iostream>
using namespace std;
//new and delete operator
int *roll = new int; //dynamically allocate memory for an integer
char *name = new char[15]; //dynamically allocate memory for a character array

void getRollandName(){
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your roll number: "<<endl;
    cin>>*roll;
}

void freeMemory(){
    delete roll; //deallocate memory for the integer
    delete [] name; //deallocate memory for the character array
}

void printRollandName(){
    cout<<endl<<"Name: "<<name;
    cout<<endl<<"Roll number: "<<*roll;
}

int main(){
    getRollandName();
    cout<<endl<<"Memory allocated dynamically for name and roll";
    cout<<endl<<"Value of Name and Roll before deallocation";

    printRollandName();
    freeMemory();
    cout<<"\n\nAfter Deallocation: ";
    printRollandName();
    return 0;
}
