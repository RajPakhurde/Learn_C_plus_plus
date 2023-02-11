#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    // create vector
    vector<int> arr;
    vector<int> brr(n,101);
    vector<int> crr{10,30,40,50};
    
    cout << "brr is :" << brr.empty() << endl;
    cout << sizeof(arr)/sizeof(int) << endl;

    for (int i=0; i<brr.size(); i++){
        cout << brr[i] << " ";
    }
    cout << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}