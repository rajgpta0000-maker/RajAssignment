#include<iostream>
using namespace std;
class B{
	public:
		int b;
		void getB(){
			cout<<"\n Enter b";
			cin>>b;
		}
};
class C{
	public:
		int c;
		void getC(){
			cout<<"\n Enter c";
			cin>>c;
		}
};
class D: public B ,public C{
	public:
		int d;
		void getD(){
			cout<<"\n Enter d";
			cin>>d;
		}
		void Add(){
			cout<<"\n Addition"<<b+c+d;
		}
};
main(){
	D d1;
	d1.getB();
	d1.getC();
	d1.getD();
	d1.Add();
	
}

