#include<iostream>
using namespace std;
main(){
	int p,r,n;
	float s;
	cout<<"\n Enter Principal:";
	cin>>p;
	//cout<<"\n Principal="<<p;
	cout<<"\n Enter No of year:";
	cin>>n;
	//cout<<"\n No of year="<<n;
	cout<<"\n Enter Rate:";
	cin>>r;
	//cout<<"\n Rate="<<r;
	s=(float)p*r*n/100;
	cout<<"\n simple interset:"<<s;
	
}
