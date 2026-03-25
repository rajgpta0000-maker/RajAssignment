#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void area()=0;
		
};
class Rect :public Parent{
	public:
		int l,b;
		void area(){
			cout<<"\n Enter l and b =";
			cin>>l>>b;
			cout<<"\n area of rect="<<l*b;
		}
};
main(){
	Rect r1;
	r1.area();
}
