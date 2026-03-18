#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"\n parent class constructor called";
		}
		parent(int x){
			cout<<"\n x="<<x;
		}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"\n Child class constructor called";
		}
		Child(int y,int z,int x):Parent(x){
			cout<<"\n in child y"<<y<<" z="<<z;
		}
};
main(){
	Child c1;
	Child(10,20,30);
}
