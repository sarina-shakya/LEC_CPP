//
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char data[100];

    //open a file in write mode
    ofstream outfile;
    outfile.open("secondfile.txt");

    cout<<"Writing to the file"<<endl;
    cout<<"Enter your name: ";
    cin.getline(data, 100);

    //write inputted data into the file.
    outfile<<data<<endl;

    cout<<"Enter your age: ";
    cin>>data;

    
    //again write inputted data into the file.
    outfile<<data<<endl;

    //close the opened file.
    outfile.close();

    //open a file in read mode
    ifstream infile;
    infile.open("secondfile.txt");

    cout<<"Reading from the file"<<endl;
    infile>>data;

    //write data at screen. this will bring first data to the screen i.e. name
    cout<<data<<endl;

    //again read data from file and display it for second data to screen i.e. age
    infile>>data;
    cout<<data<<endl;

    //close the opened file
    infile.close();

    return 0;

}