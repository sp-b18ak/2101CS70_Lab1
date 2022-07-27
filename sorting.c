#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>  


void fswap(int arr[],int a, int b);
int p(int arr[],int l, int m, int k);
void fsort(int arr[], int l,int r);
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
  
    fsort(arr,0, n-1);
    print(arr, n);
  
    return 0;
}

void fswap(int arr[],int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int p(int arr[],int l, int m, int k) 
{
   int lp = l -1;
   int mp = m;

   while(true) 
   {
      while(arr[++lp] < k) {
      }
		
      while(mp > 0 && arr[--mp] > k) {
      }

      if(lp >= mp) {
         break;
      } 
      else {
         fswap(lp,mp);
      }
   }
	
   swap(lp,m);
   return lp;
}

void fsort(int arr[],int l, int r) 
{
   if(r-l <= 0) 
   {
      return;   
   } 
   else 
   {
      int k = arr[r];
      int pp = p(arr,l, r, k);
      fsort(arr,l,pp-1);
      fsort(arr,pp+1,r);
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
