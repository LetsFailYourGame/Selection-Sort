#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int array_to_sort[10];

void printArr(int *arr, int n_size)
{
    for(int i = 0; i < n_size; i++)
    {
       printf("[%d] ", arr[i]);
    }
}

void sort_arr(int to_sort_arr[])
{
    int min , tmp;

    for (int i = 0; i < 10; i ++)
    {
        //find min in arr
        min = i;
        for (int j = i+1; j < 10; j++)
        {
            if(to_sort_arr[j] <= to_sort_arr[min])
            { min = j; }
        }

        //swap
        tmp = to_sort_arr[i];
        to_sort_arr[i] = to_sort_arr[min];
        to_sort_arr[min] = tmp;
        printArr(to_sort_arr, 10);
        printf("Changed %d with %d\n", to_sort_arr[i], to_sort_arr[min]);
    }
}


int main()
{
    srand(time(0));
    printf("Unsorted: ");
    for(int i = 0; i < 10; i++)
    {
        array_to_sort[i] = 2 * ( rand() % 16+1);
        printf("[%d] ", array_to_sort[i]);
    }
    printf("\n\n");

    sort_arr(array_to_sort);

    printf("\nSorted: ");
    printArr(array_to_sort, 10);
}
