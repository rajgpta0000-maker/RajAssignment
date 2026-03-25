#include<iostream>
using namespace std;
class Maths{
	public:
		int a;
		static int x;
		Maths(int a){
			this->a=a;
			Maths::x++;
		}
		static void objCountPrint(){
			cout<<"\n Total object="<<Maths::x;
		}
};
int Maths::x=0;
main(){
	Maths m1(23);
	cout<<m1.a;
	Maths m2(45);
	cout<<m2.a;
	cout<<"\n"<<m2.a;
	cout<<"\n"<<m1.x;
	cout<<"\n"<<m2.x;
	Maths::objCountPrint();
	
	
}
