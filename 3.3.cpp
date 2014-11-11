/**
 * 3.3.cpp
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Read a number N from the user and then find the first N primes. 
 */


#include <iostream>

using namespace std;

bool isprime(int num, int index);

int main()
{
    int n;
    cout << "Give me N" << endl;
    cin >> n;
    cout << n << " first prime numbers:" << endl;
    int count = 1, prime = 2;
    while (count <= n)
    {
        if (isprime(prime++, count))
        {
            count++;
        }
    }
}

bool isprime(int num, int index)
{
    for (int i = num - 1; i > 1; i--)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    cout << index << ". " << num << endl;
    return true;    
}
