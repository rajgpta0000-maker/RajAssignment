#include<iostream>
int i,j;
using namespace std;
template <class T>
class Sorting{
	public:
		T a[5],temp;
		Sorting(){
			for(i=0;i<5;i++){
				cout<<"\n Enter i="<<i;
				cin>>a[i];
			}
		}
		T sort(){
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[i]>a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		T display(){
			for(i=0;i<5;i++){
				cout<<"\n a["<<i<<"] ="<<a[i];
			}
		}
};
main(){
	Sorting <char>s1;
	s1.sort();
	s1.display();
	
	Sorting <int>s2;
	s2.sort();
	s2.display();
}
