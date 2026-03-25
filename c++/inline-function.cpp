#include<iostream>
using namespace std;
class Maths{
	public:
		inline void display(){
			cout<<"\n inline function example";
		}
};
main(){
	Maths m1;
	m1.display();
}
