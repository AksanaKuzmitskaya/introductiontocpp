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
#include <iostream>
#include <string>
using namespace std;

string piglatin(string word)
{
    string vowel = "aeiou";
    char l = word.at(0);
    int v = vowel.length();
    for (int i = 0; i < v; i++)
    {
        if (l == vowel.at(i))
        { 
            return word;          
        }    
    }
    word = word.substr(1);
    word += l;
    word += "ay"; 
          
    return word;    
}

int main()
{
    string n = "banana";
    string a = piglatin(n);
    cout << a << endl;
    return 0;  
}


