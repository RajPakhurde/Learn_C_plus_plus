#include <iostream>
using namespace std;
int sumadd(int a , int b);

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
    int sum = sumadd(5,5) ;
    cout << sum << endl;

    cout << 'a' + 0 << endl; // it will print asci value of a that is 97

    int i = 0;
    if (i > 10)
    {
        cout << i << endl ;
        i++;
    }
    else {
        cout << "i is less than 10" << endl ;
    }


    for (int i = 0; i < 10; i++)
    {
        cout << i << endl ;
    }

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
    float add2 = (int)abc + 2;
    cout << add2 << endl ;

    char ch1 = 254;
    cout << ch1 << endl ;

    cout << (ab > c) << endl ;
    return 0;
}

int sumadd(int a , int b){
    int sum = a + b;
    return sum;
}