#include <iostream>
using namespace std;

class Circle
{


public:
    Circle(float r)
    {
        radius = r;
        area = 3.14 * radius * radius;
    }
    void display()
    {
        cout << "Radius of Circle: " << radius << endl;
        cout << "Area of Circle: " << area << endl;
    }
};

int main()
{
    float r;

    cout << "Enter radius of circle: ";
    cin >> r;

    Circle c(r); 
    c.display();

    return 0;
}
