#include<stdio.h>
#include <stdlib.h>
#include "trans.h"
//m=rows, n=columns
double *trans(double *arr, int n, int m) 
{ 
    int i, j,l=0; int k=m*n;
    double *a= (double*) calloc(k,sizeof(double));
    for (i = 0; i < m; i++) 
    {
         for (j = 0; j < n; j++) 
            a[l++]=*((arr+j*m) + i); 
       
    }
    return a;
} 
