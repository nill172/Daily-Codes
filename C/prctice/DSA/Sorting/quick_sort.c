#include <stdio.h>

void display(int a[], int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int partition(int a[], int low, int high)
{
    int p = a[low];
    int i = low + 1;
    int j = high;
    int t;
    // printf("p= %d\n",p);
    do
    {
        printf("p = %d, i = %d, j = %d  ",p,i,j);
        while (a[i] <= p)
        {
            printf("a[%d] = %d\n",i,a[i] );
            i++;
        }
        while (a[j] > p)
        {
            printf("a[%d] = %d\n",j,a[j] );
            j--;
        }
        if (i < j)
        {
            // printf("a[%d] = %d  a[%d] = %d\n",i,a[i],j,a[j] );
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            // printf("a[%d] = %d  a[%d] = %d\n",i,a[i],j,a[j] );
        }
    }while (i < j);
    printf("\n");
    t = a[low];
    a[low] = a[j];
    a[j] = t;
    return j;
}

void quick_sort(int a[], int low, int high)
{
    int p;
    if (low < high)
    {
        p = partition(a, low, high);
        quick_sort(a, low, p - 1);
        quick_sort(a, p + 1, high);
    }
}

int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element no.%n: ", i + 1);
        scanf("%d", &a[i]);
    }
    display(a, n - 1);
    quick_sort(a, 0, n - 1);
    display(a, n - 1);
    return 0;
}