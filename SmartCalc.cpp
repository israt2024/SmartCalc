#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    char again;

    do {
        cout << "\n===== Advanced Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power (x^y)\n";
        cout << "6. Square Root\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if(choice == 5) {
            cout << "Enter base number: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
        } else if(choice == 6) {
            cout << "Enter number: ";
            cin >> num1;
        }

        switch(choice) {
            case 1:
                cout << "Result: " << num1 + num2;
                break;
            case 2:
                cout << "Result: " << num1 - num2;
                break;
            case 3:
                cout << "Result: " << num1 * num2;
                break;
            case 4:
                if(num2 != 0)
                    cout << "Result: " << num1 / num2;
                else
                    cout << "Error: Division by zero!";
                break;
            case 5:
                cout << "Result: " << pow(num1, num2);
                break;
            case 6:
                if(num1 >= 0)
                    cout << "Result: " << sqrt(num1);
                else
                    cout << "Error: Negative number!";
                break;
            default:
                cout << "Invalid choice!";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    cout << "Thank you for using the calculator!";
    return 0;
}

