#include<iostream>
using namespace std;

class Rectangle
{
public:
    float Length, Width;

    void data(){
        cout<<"Enter The Length=";
        cin>>Length;
		cout<<"Enter The Width=";
        cin>>Width;
    }
	void area(){
        cout <<"Area Of Rectangle="<<Length*Width;
    }
};

main()
{
    Rectangle r1;
	r1.data();
    r1.area();

    
}
