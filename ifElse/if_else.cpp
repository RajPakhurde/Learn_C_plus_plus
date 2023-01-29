#include <iostream>
using namespace std;

int main() {

    // if- else
    int score;
    cout << "Enter Score: " << endl;
    cin >> score;

    if (score < 300)
    {
        cout << "India wins" << endl;
    }
    else {
        cout << "Pak wins" << endl;
    }
    

    // if- else if - else
    int marks;
    cout << "Enter Marks: " << endl;
    cin >> marks;
    if (marks >= 90) {
        cout << "A grade" << endl;
    }
    else if (marks >= 80){
        cout << "B grade" << endl;
    }
    else if (marks >= 60) {
        cout << "c grade" << endl;
    }
    else if (marks >= 40) {
        cout << "D grade" << endl;
    }
    else {
        cout << "F grade" << endl;
    }


    // Exersise
    int bro_num;
    cout << "Enter no of bros: " << endl;
    cin >> bro_num;

    if (bro_num == 0) {
        cout << "Bath Banjayege" << endl;
    }
    else {
        cout << "Bath nahi bani" << endl;
    }


    // we can write cout and cin in condition itself
    int n;
    if(cout << "Hello" << endl) {
        cout << "Bobor" << endl;
    }
    
}