#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>
using namespace std;

int pattn(int arr[], int lw, int hgh) 
{
    int pvt = arr[hgh]; 
    int i = (lw - 1); 

    for (int j = lw; j < hgh; j++) 
    {
        if (arr[j] <= pvt) 
        {
            i++; 
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[hgh]);
    return (i + 1); 
}

void quicksort(int arr[], int lw, int hgh) 
{
    if (lw < hgh) 
    {
        int pvt = pattn(arr, lw, hgh);
        quicksort(arr, lw, pvt - 1);
        quicksort(arr, pvt + 1, hgh);
    }
}

#endif
