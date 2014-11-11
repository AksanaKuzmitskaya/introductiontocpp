#include <iostream>

using namespace std;

int main()
{
    const char* hello = "Hello, World!";
    int n;
    int i = 0;
    cout << "Please enter an integer value: ";
    
    // scan the user's input
    cin >> n;
    
    // check if the n is nonnegative integer
    if (n < 0)
    {
        return 1;
    }
    
    cout << "a for loop:" << endl;
    for (i; i < n; i++)
    {
        cout << hello << endl;
    }
    
    cout << "a while loop:" << endl;
    i = n;
    while (i > 0)
    {
        i--;
        cout << hello << endl;
    }
    i = n;
    cout << "a do...while loop:" << endl;
    do
    {
        cout << hello << endl;
        i--;
    } 
    while (i > 0);
    
    return 0;
}
