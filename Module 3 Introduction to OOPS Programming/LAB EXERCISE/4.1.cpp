#include<iostream>
using namespace std;

// Function definitions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    return (float)a / b;
}

main() {
    int x, y, choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result = " << add(x, y);
            break;
        case 2:
            cout << "Result = " << sub(x, y);
            break;
        case 3:
            cout << "Result = " << mul(x, y);
            break;
        case 4:
            cout << "Result = " << divi(x, y);
            break;
        default:
            cout << "Invalid choice";
    }

   
}
