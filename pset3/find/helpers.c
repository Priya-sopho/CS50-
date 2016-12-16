/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool linear_search(int value, int values[], int n)
{
    for(int i=0;i<n;++i)
    if(values[i]==value)
        return true;
    return false;
}

bool search(int value, int values[], int n)

{
    if(value<0)
       return false;
    else
       return binary_search(value,values,n);
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{   
    // TODO: implement an O(n^2) sorting algorithm
    bubble_sort(values,n);
    return;
}

bool binary_search(int value, int values[], int n)
 {
     int end = n-1;
     int beg = 0;
     while(end>=beg)
     {
         int mid = (beg+end)/2;
         if(values[mid]==value)
         return true;
         else if(values[mid]>value)
          end = mid -1;
         else
          beg = mid +1;
         
     }
     return false;
 }
 
 void bubble_sort(int values[], int n)
  {
      bool iter;
      do
       {
           iter = false;
           for(int i=0;i<n-1;++i)
            {
                if(values[i]>values[i+1])
                 {
                     int temp = values[i];
                     values[i] = values[i+1];
                     values[i+1] = temp;
                     iter = true;
                 }
            }
        }while(iter);
        return;
     }
  