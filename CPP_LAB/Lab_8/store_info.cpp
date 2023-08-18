#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string name;
    string address;
    string program;
};

void storeStudentInfo(const Student& student) {
    ofstream outFile("student_data.txt", ios::app);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return;
    }
    outFile << student.name << " | " << student.address << " | " << student.program << endl;
    outFile.close();
}

void displayStudentInfo(const string& searchName) {
    ifstream inFile("student_data.txt");
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    cout << "Name                Address             Program" << endl;
    cout << "----------------------------------------------" << endl;

    string line;
    while (getline(inFile, line)) {
        size_t pos = line.find(" | ");
        string name = line.substr(0, pos);
        if (name == searchName) {
            string rest = line.substr(pos + 3);
            pos = rest.find(" | ");
            string address = rest.substr(0, pos);
            string program = rest.substr(pos + 3);

            cout << name;
            for (int i = name.size(); i < 20; ++i)
                cout << " ";
            cout << address;
            for (int i = address.size(); i < 20; ++i)
                cout << " ";
            cout << program << endl;
        }
    }
    inFile.close();
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore(); // Clear newline from the input buffer

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, student.name);
        cout << "Address: ";
        getline(cin, student.address);
        cout << "Program: ";
        getline(cin, student.program);

        storeStudentInfo(student);
    }

    string searchName;
    cout << "Enter student name to search: ";
    getline(cin, searchName);

    cout << endl << "Search results:" << endl;
    displayStudentInfo(searchName);

    return 0;
}
