#include <iostream>
using namespace std;

int main() {
    // This program gives the sum of all the odd numbers from 1 to n;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int total = 0;

    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            total = total + i;
        } else {
            continue;
        }
    }

    cout << "Sum of all the odd numbers from 1 to " << n << " is: " << total;
}