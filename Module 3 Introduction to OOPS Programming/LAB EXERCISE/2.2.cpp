#include<iostream>
using namespace std;

main() {
   
    int a = 10;
    double b = a;   

    cout << "Implicit Conversion:" << endl;
    cout << "Integer a = " << a << endl;
    cout << "Converted to double b = " << b << endl;

    
    double x = 5.75;
    int y = (int)x;   

    cout << "\nExplicit Conversion:" << endl;
    cout << "Double x = " << x << endl;
    cout << "Converted to int y = " << y << endl;

   
}
