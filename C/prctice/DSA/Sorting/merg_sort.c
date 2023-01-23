#include <stdio.h>

void display(int a[], int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void marge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[50];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void margesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        margesort(a, low, mid);
        margesort(a, mid + 1, high);
        marge(a, low, mid, high);
    }
}

void main()
{
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element no.%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nThe entered array:\n");
    display(a, n - 1);
    margesort(a, 0, n - 1);
    printf("\nThe sorted array using merge sort:\n");
    display(a, n - 1);
}