#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>  

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

void fsort(int arr[], int n)
{
    int i,j,k;

    for (i = 1; i < n; i++) 
    {
        k = arr[i];
        j = i - 1;
  
        while (j >= 0 && arr[j] > k) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = k;
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