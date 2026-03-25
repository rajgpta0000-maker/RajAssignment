#include <iostream>
#include <string>
using namespace std;

main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    bool isPalindrome = true;

    
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    
    if(isPalindrome)
        cout << "The string is a Palindrome." << endl;
    else
        cout << "The string is NOT a Palindrome." << endl;

    
}
