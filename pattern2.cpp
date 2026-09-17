#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to generate the square pattern: ";
    cin >> n;

    //  For the pattern with the stars
    for (int j = 1; j <= n; j++) {
        cout << endl;
        for (int k = 1; k <= n; k++) {
            cout << "*";
        }
    }
}