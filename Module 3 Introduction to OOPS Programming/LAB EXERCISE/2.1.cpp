#include<iostream>
using namespace std;

main() {
    
    int a = 10;
    float b = 5.5;
    char c = 'A';

    
    const float PI = 3.14;

    
    float sum = a + b;
    float area = PI * a * a;

   
    cout << "Integer value: " << a << endl;
    cout << "Float value: " << b << endl;
    cout << "Character value: " << c << endl;
    cout << "Sum = " << sum << endl;
    cout << "Area using constant PI = " << area << endl;

    
}
