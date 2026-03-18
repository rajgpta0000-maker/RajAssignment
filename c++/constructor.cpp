#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		// simple(default) constructor
		Maths(){
			cout<<"\n Default constructor called";
		}
		// parametrized constructor
		Maths(int x,int y){
			a=x;
			b=y;
		}
		//copy constructor
		Maths(const Maths &m3){
			a=m3.a;
			b=m3.b;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	Maths m1;
	Maths m2(100,200);
	m2.display();
	Maths m3(35,70);
	m3.display();
	Maths m4 = m3;
	m4.display();
	
}
	
