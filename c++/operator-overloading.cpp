#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(int x=0,int y=0){
			a=x;
			b=y;
		}
		Maths operator +(Maths &m){
			Maths m3;
			m3.a=a+m.a;
			m3.b=b+m.b;
			return m3;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	Maths m1(1,2);
	m1.display();
	Maths m2(3,4);
	m2.display();
	Maths m3 = m1 + m2;
	m3.display();
}
