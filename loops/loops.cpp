#include <iostream>
using namespace std;

int main()
{
    // pattern 1
    cout << "Pattern 1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // out:-
    /*
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     */

    // int table;
    // cout << "Enter which table you want: " ;
    // cin >> table;

    // for (int i=1;i<=10;i++) {
    //     cout << "2 x " << i << " = " << 2*i << endl;
    // }

    // int i = 0;
    // for(; ; ){
    //     if(i < 5) {
    //         cout << i << endl;
    //         i++;
    //     }
    //     else {
    //         break;
    //     }
    // }

    // pattern 2
    cout << "Pattern 2" << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (row > 0 && row < 3 && col > 0 && col < 7)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // out:-
    /*
     * * * * * * * *
     *             *
     *             *
     * * * * * * * *
     */

    // pattern 3
    cout << "Pattern 3" << endl;
    int row;
    cout << "Enter rows : ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int s = 0; s < (row * 2 / 2) - i - 1; s++)
        {
            cout << " ";
        }
        for (int p = 0; p < i + 1; p++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // out:-
/*
        * 
       * * 
      * * * 
     * * * * 
    * * * * *
*/

} 
