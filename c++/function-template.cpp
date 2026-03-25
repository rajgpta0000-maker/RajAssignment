#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b){
	cout<<"\n addition"<<a<<"and b ="<<a+b;
}
main(){
	add<int>(12,34);
	add<float>(1.2,56.8);
}
