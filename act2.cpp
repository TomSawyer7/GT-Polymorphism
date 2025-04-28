#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details" << endl;
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};

class Developer : public Employee {
public:
    void showDetails() override {
        cout << "I am a Developer. I write code." << endl;
    }
};

int main() {
    int choice;

    cout << "Enter your choice (1 for Manager, 2 for Developer): ";
    cin >> choice;

    Employee* emp = nullptr;

    if (choice == 1) {
        emp = new Manager();
    } else if (choice == 2) {
        emp = new Developer();
    } else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    if (emp != nullptr) {
        emp->showDetails();
        delete emp;
    }

    return 0;
}