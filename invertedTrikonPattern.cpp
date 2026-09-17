#include <iostream>
using namespace std; 

int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // For the inverted triangle pattern;

    for (int i = 0; i < n; i++) {
        // For the spaces;

        for (int k = 0; k < i; k++) {
            cout << " ";
        }
        
        // For the numbers;
        for (int j = 0; j < n - i; j++) {
            cout << i + 1;
        }


        cout << endl;
    }
}