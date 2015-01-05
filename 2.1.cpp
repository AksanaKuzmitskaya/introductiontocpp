#include <iostream>
#include <string>
using namespace std;

int main()
{
    const char* hello = "Hello, World!";
    cout << hello << endl;
    char *array = new char["laugh"];
    string str = "pop";

    cout << "test\n";
    cout << *array << "----------\n";
    return 0;
}
