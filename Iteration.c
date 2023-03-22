#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} // End of Swap

void BubbleSort(int array[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        printf("Iteration #%d\n", i+1);
        printf("Number of Swaps: %d\n", n-i-1);
        for (j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            printArray(array, n);
        }
    }
}// End of BubbleSort

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
} // End of printArray

int main()
{
    int array[] = {97,16,45,63,13,22,7,58,72};

    int n = 9;

    printf("Array before sorting: \n");
    printArray(array, n);

    BubbleSort(array, n);
    printf("Sorted array: \n");
    printArray(array, n);
    return 0;
} // End of Main