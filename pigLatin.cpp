#include <string>
#include <iostream>
using namespace std;

string pigLatinify(string word)
{
    const string vowels = "aeoiu";
    string newWord;
    int j = 0;
    bool isVowel = false;
    for (int i = 0, len = vowels.length(); i < len; ++i)
    {
        if (word[0] == vowels[i])
        {
            isVowel = true;
            newWord = word + "-" + "w"; 
            break;
        }      
    }
    if (!isVowel)
    {
        if (word[0] == 'q')
                j = 1;             
        newWord = word.substr(j + 1) + "-" + word.substr(0, j + 1);
    }
    newWord += "ay";
    return newWord;
}

int main()
{
    cout << "Give me a word" << endl;
    string word;
    cin >> word;
    string result;
    result = pigLatinify(word);
    cout <<  result << endl;
}
