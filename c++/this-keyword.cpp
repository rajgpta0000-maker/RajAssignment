#include<iostream>
using namespace std;
class Maths{
	public:
		int a;
		Maths(int a){
			this->a=a;
		}
};
main(){
	Maths m1(23);
	cout<<m1.a;
	Maths m2(45);
	cout<<m2.a;
}
