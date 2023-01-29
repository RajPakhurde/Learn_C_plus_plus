#include <iostream>
using namespace std;
 
int main() {
    // use cout << "Namaste Bharat" ; to print in teminal.
    cout << "Namaste Bharat" ;
    // use end1 to print next line
    cout << endl ;
    cout << 2 ;
    cout << "2" ;
    cout << '2' << endl ;

    // taking a input
    int a;
    cout << "Enter a number: " << endl ;
    // cin >> a;
    cout << "You Enter " << a << endl ;

    cout << 'a' + 0 << endl; // it will print asci value of a that is 97

   
    // sizeOf () will return how much memory is taken in bytes
    long long ab = 5;
    cout << sizeof(ab) << endl;
    
    // Signed and unsigned datatype
    int c = 7; // by default it is signed because it can store +ve and -ve num
    unsigned int d = 3; // in unsigned we can only store positive num
    cout << d << endl;

    // Implicit Type Casting mean automatically handel type casting like below case
    char ch = 97;
    cout << ch << endl; // out:- 97

    // Explicit Type Casting 
    float abc = 5.7;
    float add2 = (int)abc + 2; // if we want to convert abd to float:- (float)abc , Double:- (double)abc
    cout << add2 << endl ;

    // if we store any int in char it will store charater according to its ascci value
    char ch1 = 254;
    cout << ch1 << endl ;

    // This will return 1 or 0 , if true than 1 and if false than 0
    cout << (ab > c) << endl ;
    
    char res = 'a';
    char res2 = (char)res+1;
    cout << res2 << endl;
    return 0;
}

 