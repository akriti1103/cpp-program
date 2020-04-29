#include <iostream>
using namespace std;

bool checkPrime(int a);

int main()
{
    int a, i;
    bool point = false;

    cout << "Enter a positive  integer: ";
    cin >> a;

    for(i = 2; i <= a/2; ++i)
    {
        if (checkPrime(i))
        {
            if (checkPrime(a - i))
            {
                cout << a << " = " << i << " + " << a-i << endl;
                point = true;
            }
        }
    }

    if (!point)
      cout << a << " can't be expressed as sum of two prime numbers.";

    return 0;
}
// Check prime number
bool checkPrime(int a)
{
    int i;
    bool isPrime = true;

    for(i = 2; i <= a/2; ++i)
    {
        if(a % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}
