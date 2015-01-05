/*Write a function that returns the length of a string (char *), excluding the final NULL 
character. It should not use any standard-library functions. You may use arithmetic and 
dereference operators, but not the indexing operator ([]).*/
#include <iostream>

using namespace std;

int main()
{
    const char *h = "hello";
    int len = 0;
    while (*(h + len) != '\0')
    {
        len++;
    }
    cout << len << endl;
}
