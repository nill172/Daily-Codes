#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int p = A[low];
    int i = low + 1;
    int j = high;
    int t;

    do
    {
        while (A[i] <= p)
        {
            i++;
        }

        while (A[j] > p)
        {
            j--;
        }

        if (i < j)
        {
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    t = A[low];
    A[low] = A[j];
    A[j] = t;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    int A[n];
    // int a[7] = {3, 5, 7, 2, 6, 1, 4};
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element no.%d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}
