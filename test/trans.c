#include<stdio.h>
#include <stdlib.h>

void transpose(int *arr, int n, int m) 
{ 
    int i, j; 
    for (i = 0; i < m; i++) 
    { 
         for (j = 0; j < n; j++) 
        printf("%5d ",*((arr+j*m) + i)); 
        printf("\n");
       
    }
  
} 
