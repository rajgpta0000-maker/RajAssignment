#include<iostream>
using namespace std;
class Maths{
	private:
		int x,y;
	public:
		Maths(){
			x=10;
			y=20;
		}
		friend class frinClass;
};
class frinClass{
	public:
		void add(Maths m1){
			cout<<"\n addition="<<m1.x+m1.y;
		}
	
};
main(){
	Maths m1;
	frinClass f1;
	f1.add(m1);
}
