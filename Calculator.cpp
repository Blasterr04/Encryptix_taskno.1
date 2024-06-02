#include <iostream>

using namespace std;

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    } else {
        return x / y;
    }
}

int main() {
    char choice;
    float num1, num2;
    bool continueCalculation = true;
    char nextCalculation;

    while (continueCalculation) {
        cout << "Select operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;

        cout << "Enter choice (1/2/3/4): ";
        cin >> choice;

        if (choice >= '1' && choice <= '4') {
            cout << "Enter first number: ";
            while(!(cin >> num1)) {
                cout << "Invalid input. Please enter a numeric value: ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            cout << "Enter second number: ";
            while(!(cin >> num2)) {
                cout << "Invalid input. Please enter a numeric value: ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            switch(choice) {
                case '1':
                    cout << "The result of " << num1 << " + " << num2 << " is: " << add(num1, num2) << endl;
                    break;
                case '2':
                    cout << "The result of " << num1 << " - " << num2 << " is: " << subtract(num1, num2) << endl;
                    break;
                case '3':
                    cout << "The result of " << num1 << " * " << num2 << " is: " << multiply(num1, num2) << endl;
                    break;
                case '4':
                    cout << "The result of " << num1 << " / " << num2 << " is: " << divide(num1, num2) << endl;
                    break;
            }
        } else {
            cout << "Invalid Input. Please enter a number between 1 and 4." << endl;
        }

        cout << "Do you want to perform another calculation? (yes/no): ";
        cin >> nextCalculation;
        if (nextCalculation == 'n' || nextCalculation == 'N') {
            continueCalculation = false;
        }
    }

    return 0;
}
