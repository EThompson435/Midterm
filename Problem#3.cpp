#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string operation;
    double operand1, operand2;

    cout << "Enter the operation you want to perform (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
    cin >> operation;

    if (operation == "sin" || operation == "asin" || operation == "cos" || operation == "acos" || operation == "tan" || operation == "atan" || operation == "sqrt" || operation == "ceil" || operation == "abs" || operation == "log" || operation == "log10" || operation == "log2" || operation == "round") {
        cout << "Enter the operand: ";
        cin >> operand1;

        if (operation == "sin") {
            cout << "Result: " << sin(operand1) << endl;
        }
        else if (operation == "asin") {
            cout << "Result: " << asin(operand1) << endl;
        }
        else if (operation == "cos") {
            cout << "Result: " << cos(operand1) << endl;
        }
        // Implement other single-operand operations similarly
        else if (operation == "sqrt") {
            cout << "Result: " << sqrt(operand1) << endl;
        }
        else if (operation == "ceil") {
            cout << "Result: " << ceil(operand1) << endl;
        }
        else if (operation == "log") {
            cout << "Result: " << log(operand1) << endl;
        }
        else if (operation == "log10") {
            cout << "Result: " << log10(operand1) << endl;
        }
        else if (operation == "round") {
            cout << "Result: " << round(operand1) << endl;
        }
        else {
            cout << "Invalid operation!" << endl;
        }
    }
    else {
        cout << "Enter the first operand: ";
        cin >> operand1;
        cout << "Enter the second operand: ";
        cin >> operand2;

        switch (operation[0]) {
        case '+':
            cout << "Result: " << operand1 + operand2 << endl;
            break;
        case '-':
            cout << "Result: " << operand1 - operand2 << endl;
            break;
        case '*':
            cout << "Result: " << operand1 * operand2 << endl;
            break;
        case '/':
            if (operand2 != 0) {
                cout << "Result: " << operand1 / operand2 << endl;
            }
            else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
            // Implement other binary operations similarly
        default:
            cout << "Invalid operation!" << endl;
        }
    }

    return 0;
}
