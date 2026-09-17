#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    // For the star pattern as a right angled triangle;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}