#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    // Declaring the friend function
    friend void displayValue(const MyClass& obj);
};

// Definition of the friend function
void displayValue(const MyClass& obj) {
    cout << "The value is: " << obj.value << endl;
}

int main() {
    MyClass obj(42);

    // Calling the friend function
    displayValue(obj);

    return 0;
}
