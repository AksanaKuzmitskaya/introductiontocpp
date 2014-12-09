/**
 * stringreplace.cpp
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Replace whitespace in a string with “%20”.
 */
 

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string str = "this is a test";    
    cout << str << endl;
    
    for(int i=0; i < str.size(); i++)
    {
        if(str[i] == ' ') str.replace(i, 1, "%20");
    }
    
    cout << str << endl;
    
     // C STRING
    const char *cstr = "c string is fun";
    int len = (int)strlen(cstr);
    
    char *newcstr= [len*3]{'\0'};
    
    while (*cstr != '\0')
    {
        *newcstr = *cstr;
        
        if (*cstr == ' ')
        {
            *newcstr = '%';
            ++newcstr;
            *newcstr = '2';
            ++newcstr;
            *newcstr = '0';
        }
        
        ++cstr;
        ++newcstr;
    }
    
    cout << newcstr << endl;
}
