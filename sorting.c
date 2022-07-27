#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>  

void fswap(int *a, int *b);
void fsort(int arr[], int n);
void print(int arr[], int n);
  
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  
    fsort(arr, n);
    print(arr, n);
  
    return 0;
}

void fswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void fsort(int arr[], int n)
{
    int i, j, m;
  
    for (i = 0; i < n-1; i++)
    {
        m = i;

        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[m])
          {
            m = j;
          }
        }
  
        fswap(&arr[m], &arr[i]);
    }
}
  
void print(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}