#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int total = 0;
    for (int i = 0; i <= num; i++) {
        total = total + i;
    }
    
    cout << total << endl;
}