/**
 * piglatin.cpp
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Program that turns a given English word into Pig Latin. 
 * 1. In words that begin with consonant sounds, the initial consonant (if the word starts
 * with ‘q’, then treat ‘qu’ as the initial consonant) is moved to the end of the word, and
 * an “ay” is added. For example:
 * • beast : east-bay
 * • question : estion-quay
 * 2. In words that begin with vowel sounds, the syllable “way” is simply added to the end
 * of the word.
 */

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
