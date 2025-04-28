#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "=== Simple Calculator ===" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add three integers" << endl;
    cout << "3. Add two floats" << endl;
    cout << "4. Subtract two integers" << endl;
    cout << "5. Multiply two integers" << endl;
    cout << "6. Divide two floats" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        }
        case 2: {
            int a, b, c;
            cout << "Enter three integers: ";
            cin >> a >> b >> c;
            cout << "Result: " << calc.add(a, b, c) << endl;
            break;
        }
        case 3: {
            float a, b;
            cout << "Enter two floats: ";
            cin >> a >> b;
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        }
        case 4: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        }
        case 5: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        }
        case 6: {
            float a, b;
            cout << "Enter two floats: ";
            cin >> a >> b;
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
