#include <iostream>
using namespace std;

int main()
{
    // This program checks if the number entered is prime or not;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = false;

    if (n == 2)
    {
        isPrime = true;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
            }
        }
    }

    // using a for loop;

    if (isPrime == true)
    {
        cout << "The number is prime.";
    }
    else
    {
        cout << "The number is not prime.";
    }
}