/**
 * reverse.cpp
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Reverse function that takes an integer array and its length as arguments and reverses 
 * the contents of the array, leaving the reversed values in the original 
 * array, and return nothing. */
#include <iostream>

using namespace std;

void reverse(int arr[], int len);
void swap(int &a, int &b);

int main()
{
    int arrayToReverse[5] = {1, 2, 3, 4, 5};
    int len = 5;
    reverse(arrayToReverse, len);
    for (int i = 0; i < len; i++)
    {
        cout << arrayToReverse[i] << endl; 
    }
}

void reverse(int arr[], int len)
{
   for (int i = 0; i < len/2; i++)   
   {
       swap(arr[i], arr[--len]);
   }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
