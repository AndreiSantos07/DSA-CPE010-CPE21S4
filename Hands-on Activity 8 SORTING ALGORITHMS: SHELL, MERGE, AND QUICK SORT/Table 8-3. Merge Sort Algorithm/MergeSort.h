#ifndef MERGESORT_H
#define MERGESORT_H
#include <iostream>
using namespace std;

void merge(int arr[], int lft, int mid, int rght) 
{
    int n1 = mid - lft + 1; 
    int n2 = rght - mid;     
    int* L = new int[n1]; 
    int* R = new int[n2]; 


    for (int i = 0; i < n1; i++)
        L[i] = arr[lft + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0; 
    int j = 0; 
    int k = lft;
    
    while (i < n1 && j < n2) 
    {
        
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        } 
        
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void merge_sort(int arr[], int lft, int rght) 
{
    if (lft < rght) 
    {
        int mid = lft + (rght - lft) / 2; 
        merge_sort(arr, lft, mid);
        merge_sort(arr, mid + 1, rght);
        merge(arr, lft, mid, rght);
    }
}

#endif
