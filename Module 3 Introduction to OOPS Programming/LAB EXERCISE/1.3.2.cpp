#include<iostream>
using namespace std;

class Rectangle {
public:
    float length, width;

    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea() {
        cout << "Area of Rectangle = " << length * width;
    }
};

main() {
    Rectangle r;
    r.getData();
    r.calculateArea();
   
}
