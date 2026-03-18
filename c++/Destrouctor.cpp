#include<iostream>
using namespace std;
class SimpleIntrest{
	public:
		int p,r,n;
		SimpleIntrest(){
			cout<<"\n Enter p r n  =";
			cin>>p>>r>>n;
		}
		~ SimpleIntrest(){
			cout<<"\n Destructor method called";
		}
		void FindIntrest(){
			float i = (p*n*r)/100;
			cout<<"\n SimpleIntrest="<<i;
			
	}
};
main(){
	SimpleIntrest s1;
	s1.FindIntrest();
}
