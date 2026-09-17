#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // For the pattern;

    for (int i = 0; i < n; i++)
    {

        // For the first half of the problem;

        // For the spaces;
        for (int spaces = 0; spaces < n - i; spaces++)
        {
            cout << " ";
        }

        // For the numbers;
        for (int nums = 0; nums < i + 1; nums++)
        {
            cout << nums + 1;
        }

        // For the set of nums 2;
        for (int revNums = i; revNums >= 1; revNums--) {
            cout << revNums;
        }

        cout << endl;
    }
}
