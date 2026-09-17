#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your name: ";
    cin >> n;
    int counter = 0;
    for(int i = 0; i < n; i++) {
    // TOP

    // For the spaces;
    for (int spaces = n - i; spaces >= 0 ; spaces--) {
        cout << "   ";
    }
    // For the stars;
        for (int stars = 0; stars < (i + 1) - counter ; stars++) {
            cout << "*";
        }

    // For the spaces 
    for (int spaces = 0; spaces >= n - 1; spaces++) {
        cout << "   ";
    }

    // For the stars
    for (int stars = 0; stars < (i + 1) - counter; stars++) {
        cout << "*";
        counter++;
    }
        cout << endl;
    }

}   