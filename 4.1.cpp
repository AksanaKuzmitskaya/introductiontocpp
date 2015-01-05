#include <iostream>
using namespace std;

int main()
{
    short number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "The factorial of a " << number << " is " << endl;
    int accumulator = 1;
    for (; number > 0; accumulator *= number --);
        cout << accumulator << ".\n";
    return 0;
}
