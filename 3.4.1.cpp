/**
 * 3.4.1.cpp
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 *  Loop indefinitely. In each iteration of the loop, read in an integer N
 * (declared as an int) that is inputted by a user, output N/5 if N is nonnegative and divisible by
 * 5, and -1 otherwise. Use the ternary operator (?:) to accomplish this.   
 */


#include <iostream>

using namespace std;

int main()
{
    int n;
    while (true)
    {
    cout << "Give me N" << endl;
    cin >> n;
    (n >= 0 && n % 5 == 0) ? cout << n / 5 : cout << -1;
    cout << endl;
    }
}
