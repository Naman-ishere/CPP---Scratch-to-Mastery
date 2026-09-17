#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to generate the square pattern: ";
    cin >> n;

    // For the number pattern
    for (int row = 1; row <= n; row++) {
        for (int pt = 1; pt <= n; pt++) {
            cout << pt;
        }
        
        cout << endl;
    }

}