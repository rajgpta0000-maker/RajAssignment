#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b,c,d;
		Maths(){
			a=1;
			b=2;
			c=3;
			d=4;
		}
		Maths(int x,int y){
			a=x;
			b=y;
			
		}
};
main(){
	Maths m1;
	Maths *m2 = new Maths(12,24);
	
	cout<<"\n sizeof m1="<<sizeof(m1);
	cout<<"\n sizeof m2="<<sizeof(m2);
}
