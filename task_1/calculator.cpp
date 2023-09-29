#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Welcome to the Basic Calculator!" << endl;
    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Please enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
            break;
    }

    return 0;
}
