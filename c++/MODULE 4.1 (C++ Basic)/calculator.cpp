#include <iostream>
using namespace std;

class Calculator
{
public:
    float a, b;
	void getData(){
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
	void add(){
        cout << "Addition = " << a + b << endl;
    }
	void subtract(){
        cout << "Subtraction = " << a - b << endl;
    }
	void multiply(){
        cout << "Multiplication = " << a * b << endl;
    }
	void divide(){
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible" << endl;
    }
};

int main()
{
    Calculator c;

    c.getData();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}
