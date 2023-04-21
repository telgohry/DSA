#include <stdio.h>
#include <stdlib.h>
#include "algorithms.h"

/***********************************************************************************/
/* UTILITIES                                                                       */
/***********************************************************************************/
// Print Array
void printArray(int8_t *arr, int8_t size)
{
    printf("\n");

    for(int8_t i=0; i<size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
}

// Swap two elements
void swap(int8_t *a, int8_t *b)
{
    int8_t temp = *a;
    *a = *b;
    *b = temp;
}

/***********************************************************************************/
/* SEARCHING ALGORITHMS                                                            */
/***********************************************************************************/
// Linear
int8_t LinearSearch(int8_t *arr, uint8_t size, int8_t key,int8_t *index)
{
    for(int8_t i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            *index = i;
            return 1;
        }
    }

    return 0;
}

// Binary: In binary search array must be sorted
int8_t BinarySearch(int8_t *arr, uint8_t size, int8_t key,int8_t *index)
{
    int8_t low = 0;
    int8_t high = size-1;
    int8_t mid;

    while(low <= high)
    {
        mid = (low+high)/2;

        if(arr[mid] == key)
        {
            *index = mid;
            return 1;
        }
        else if(key < arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    return 0;
}

/***********************************************************************************/
/* SORTING ALGORITHMS                                                              */
/***********************************************************************************/
// Bubble Sort
int8_t BubbleSort(int8_t *arr, int8_t size)
{
    int8_t flag=1;

    for(int8_t i=0; i<size-1&&flag==1; i++)
    {
        flag = 0;
        //printf("Pass #%d\n", i+1);
        for(int8_t j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }

    }

}

// Insertion Sort
int8_t InsertionSort(int8_t *arr, int8_t size)
{
    int8_t temp = 0;
    int8_t j = 0;

    for(int8_t i=1; i<size; i++)
    {
        j = i-1;
        temp = arr[i];

        while(j>-1 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1]=temp;
    }
}

// Selection Sort
int8_t SelectionSort(int8_t *arr, int8_t size)
{
    uint8_t j;
    uint8_t k;
    for(uint8_t i=0; i<size-1; i++)
    {
        for(j=i, k=i; j<size; j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
}
