#include <stdlib.h>
#include <stdio.h>

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n - 1; i++) { 
  
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] > arr[min_idx]) 
                min_idx = j; 

        swap(&arr[min_idx], &arr[i]); 
    } 
} 

int main(){
    int n,q,m;
    while (scanf("%d %d",&n,&q) != EOF){
    int vec[n];
    int tam = sizeof(vec) / sizeof(vec[0]);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vec[i]);
    }
    selectionSort(vec,tam);
    for (int i = 0; i < q; i++)
    {   scanf("%d",&m);
        printf("%d\n",vec[m-1]);
    }
    }
}
