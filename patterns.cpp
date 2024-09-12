#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Hey!! Playing around!!, must be fun *_* \n";
    cin >> row;

    for (int i = 0; i <= row; i++) {
        for (int j = row; j < i; j--) {
            cout << "- ";
        }
        for (int j = row; j >= 2 * (row - i); j--) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i <= row; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= 2*(row - i); j++) {
            cout <<"* ";
        }

        cout << endl;
       
    }
}