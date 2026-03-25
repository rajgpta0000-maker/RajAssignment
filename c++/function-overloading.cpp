#include<iostream>
using namespace std;
class Maths{
	public:
		void add(int a,int b){
			int c=a+b;
			cout<<"\n addition of a and b="<<c;
		}
		void add(float x,float y,float z){
			float ans=x+y+z;
			cout<<"\n addition of x y and z="<<ans;
		}
};
main(){
	Maths m1;
	m1.add(2.5,2.5,2.5);
	m1.add(10,5);
}
