#include<iostream>
using namespace std;

main() {
    int a = 10, b = 5;

    
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    
    cout << "\nRelational Operators:" << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a == b = " << (a == b) << endl;

    
    cout << "\nLogical Operators:" << endl;
    cout << "(a > b && b > 0) = " << (a > b && b > 0) << endl;
    cout << "(a > b || b < 0) = " << (a > b || b < 0) << endl;

    
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

   
}
