#include<fstream>
#include<iostream>
using namespace std;

int main(){
    char data[100];

    ofstream outfile;
    outfile.open("secondfile.txt");

    cout<<"Writing to the file"<<endl;
    cout<<"Enter your name: ";
    cin.getline(data, 100);

    //write inputted data into the file
    outfile<<data<<endl;

    cout<<"Enter your age: ";
    cin>>data;

    //ignore the clear one or more characters from the input buffer
    cin.ignore();

    //again write inputted data into the file.
    outfile<<data<<endl;

    outfile.close();


}


