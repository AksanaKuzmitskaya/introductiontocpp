#include <iostream>
#include <stdio.h>
using namespace std;
int temp[6]= {0};

void mergesort(int lstart,int lend,int rstart,int rend, int array[])
{
   int index = lstart;
   int size = rend - lstart + 1;
   while (lstart <= lend && rstart <= rend)
   {
      if (array[lstart] < array[rstart])
      {
          temp[index] = array[lstart];
          lstart++;
          index++;
      }
      else if (array[lstart] > array[rstart])
      {
          temp[index] = array[rstart];
          rstart++; 
          index++; 
      }
   }
      
   while (lstart <= lend)
   {
      temp[index] = array[lstart];
      lstart++;
      index++;
   }
   
   while (rstart <= rend)
   {
       temp[index] = array[rstart];
       rstart++;
       index++;
   }   
}

void sort(int start,int end, int array[])
{
    if (end > start)
    {
        int middle = (start + end) / 2;
        
        sort(start, middle, array);
        sort((middle + 1), end, array);
        
        mergesort(start, middle, (middle + 1), end, array);
    }
}


int main()
{
    int array[] = {4, 5, 1, 9, 3, 7};
    int size = sizeof(array)/sizeof(array[0]);
    cout << size << endl;
    
    sort(0, (size - 1), array);
    for (int i = 0; i < size; i++)
    {
        cout << temp[i];
    }
    
    cout << endl;
}

