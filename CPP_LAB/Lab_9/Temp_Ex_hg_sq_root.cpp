#include <iostream>
#include <cmath>

using namespace std;  // Add this line

template <typename T>
class Number {
private:
    T num;

public:
    class NEG {};
    void readnum();
    T sqroot();
};

template <typename T>
void Number<T>::readnum() {
    cout << "Enter number: ";
    cin >> num;
}

template <typename T>
T Number<T>::sqroot() {
    if (num < 0)
        throw NEG();
    else
        return static_cast<T>(sqrt(num));
}

int main() {
    Number<double> n1;
    double res;
    n1.readnum();
    try {
        cout << "\nTrying to find squareroot...";
        res = n1.sqroot();
        cout << "\nSquare root is: " << res << endl;
        cout << "Success... Exception is not raised" << endl;
    } catch (Number<double>::NEG) {
        cout << "\nSquare root of negative number not possible!" << endl;
    }

    return 0;
}
