#include<iostream>
using namespace std;
class product{
	private:
	//data member
	char  productname[20];//20+30+4;
	int pid;
	int price;
	char description[20];
	
	public:
		//member function
	void getproductInfo(){
		cout<<"\n Enter name id price and description=";
		cin>>productname>>pid>>price>>description;
	}
		void showproductInfo(){
		cout<<"\n Name="<<productname;
		cout<<"\n Id="<<pid;
		cout<<"\n Price"<<price;
		cout<<"\n Description"<<description;
	}
		
};
main(){
	product u1;
	u1.getproductInfo();
	u1.showproductInfo();
}

