#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a the number to start the pattern: ";
    cin >> n;
    int num = 1;
    // For the continuous number square pattern;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}