#include <iostream>

using namespace std;

class Matrix {
private:
    int data[2][2];

public:
    Matrix() {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                data[i][j] = 0;
    }

    Matrix(int values[2][2]) {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                data[i][j] = values[i][j];
    }

    void display() {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator-(const Matrix& other) {
        Matrix result;
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                result.data[i][j] = data[i][j] - other.data[i][j];
        return result;
    }
};

int main() {
    int predefinedValues[2][2] = {{2, 4}, {6, 8}};
    Matrix M1(predefinedValues);

    int userValues[2][2];
    cout << "Enter matrix M2 values (2x2):" << endl;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> userValues[i][j];
    Matrix M2(userValues);

    Matrix M3 = M1 - M2;

    cout << "Matrix M1:" << endl;
    M1.display();

    cout << "Matrix M2:" << endl;
    M2.display();

    cout << "Matrix M3 (Result of M1 - M2):" << endl;
    M3.display();

    return 0;
}
