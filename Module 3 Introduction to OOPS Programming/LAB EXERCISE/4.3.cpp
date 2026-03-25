#include<iostream>
using namespace std;


int num = 10;


void localScope() {
    int num = 20; 

    cout << "Inside localScope function:" << endl;
    cout << "Local num = " << num << endl;        
    cout << "Global num = " << ::num << endl;     
}


void modifyGlobal() {
    num = 50; 

    cout << "\nInside modifyGlobal function:" << endl;
    cout << "Global num modified to = " << num << endl;
}

main() {
    cout << "Inside main function:" << endl;
    cout << "Global num = " << num << endl;

    localScope();      
    modifyGlobal();    

    cout << "\nBack in main function:" << endl;
    cout << "Global num = " << num << endl;


}
