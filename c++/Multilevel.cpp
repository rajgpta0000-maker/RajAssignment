#include<iostream>
#include<string.h>
int i,j;
using namespace std;
class Country{
	public:
		int cid;
		char clist[2][20] ={"India","Australia"};
		void getCountry(){
			cout<<"\n==========Select Country==========";
			for(i=0;i<2;i++){
				cout<<"\n press "<<i<<" for "<<" "<<clist[i];
			}
			cout<<"\n Select Country";
			cin>>cid;
		}
		
};
class State:public Country{
	public:
		int sid;
		char slist[5][20] ={"GUJ","Maharstra","sidny","Perth" };
		void getState(){
			cout<<"\n==========Select State==========";
			
				for(j=0;j<4;j++){
					cout<<"\n press "<<j<<"For "<<slist[j];
				}
		
			cout<<"\n Select State";
			cin>>sid;
			
		}
};
class City:public State{
	public:
		int cityid;
		char address[20];
		char citylist[5][20] ={"surat","baroda"};
		void getFullAddress(){
			cout<<"\n==========Select City==========";
			
				for(j=0;j<2;j++){
					cout<<"\n press "<<j<<"For "<<citylist[j];
				}
		
			cout<<"\n Select City";
			cin>>cityid;
			cout<<"\n Enter address";
			cin.ignore();  // ? clear buffer
			//gets(address);
			cin.getline(address,30);
			
		}
		
		void addressShow(){
			cout<<"\n country="<<clist[cid];
			cout<<"\n address="<<address;
		}
		
};
main(){

	City c1;
	c1.getCountry();
	c1.getState();
	c1.getFullAddress();
	c1.addressShow();
}
