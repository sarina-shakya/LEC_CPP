#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(const string& n, int a) : name(n), age(a) {}

    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Age: " << person.age;
        return os;
    }

    friend istream& operator>>(istream& is, Person& person) {
        cout << "Enter name: ";
        is >> person.name;
        cout << "Enter age: ";
        is >> person.age;
        return is;
    }
};

int main() {
    Person person1("Alice", 25);
    Person person2;

    cout << "Enter details for person2:" << endl;
    cin >> person2;

    cout << "Person1: " << person1 << endl;
    cout << "Person2: " << person2 << endl;

    return 0;
}
