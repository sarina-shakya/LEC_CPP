#include <iostream>
using namespace std;
class student
{
protected:
    int studID;
    char name[25];

public:
    void getsdata()
    {
        cout << "\nEnter Student ID:";
        cin >> studID;
        cout << "\nEnter Name :";
        cin >> name;
    }
    void showdata()
    {
        cout << "\nStudent ID :" << studID;
        cout << "\nName:<<name";
    }
};
class InternalExam : virtual public student
{
protected:
    int marks1, marks2, marks3;

public:
    void getdata()
    {
        cout << "Enter Internal Marks of three subjects :";
        cin >> marks1 >> marks2 >> marks3;
    }
    void showdata()
    {
        cout << "\nInternal marks in subject 1 :" << marks1;
        cout << "\nInternal marks in subject 2 :" << marks2;
        cout << "\nInternal marks in subject 3 :" << marks3;
    }
    int totInternalmarks()
    {
        return (marks1 + marks2 + marks3);
    }
};
class ExternalExam : virtual public student
{
protected:
    int marks1, marks2, marks3;

public:
    void getdata()
    {
        cout << "Enter External Marks in three subjects :";
        cin >> marks1 >> marks2 >> marks3;
    }
    void showdata()
    {
        cout << "\nExternal Marks in subject 1 :" << marks1;
        cout << "\nExternal Marks in subject 2 :" << marks2;
        cout << "\nExternal Marks in subject 3 :" << marks3;
    }
    int totExternalMarks()
    {
        return (marks1 + marks2 + marks3);
    }
};
class result : public InternalExam, public ExternalExam
{
public:
    void getdata()
    {
        InternalExam::getdata();
        ExternalExam::getdata();
    }
    void showdata()
    {
        InternalExam::showdata();
        ExternalExam::showdata();
    }
    int TotalMarks()
    {
        return (totInternalmarks() + totExternalMarks());
    }
};
int main()
{
    result r;
    cout << "Enter data for student :" << endl;
    r.getsdata();
    cout << "\nEnter marks" << endl;
    r.getdata();
    cout << "\nData for student is :" << endl;
    r.showdata();
    cout << "\nTotal Marks :" << r.TotalMarks();
    return 0;
}