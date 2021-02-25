#include<stdio.h>
#include "trans.h"
//n=rows, m=columns
int main(void)
{
 int m=3 , n=3 ; 
              
 double arr[][3]={1,2,3,4,5,6,7,8,9};
 printf("\nInside main\n");
 double *a = trans(*arr, n, m); 
 for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
     printf("%5lf ",a[i*n+j]);
   printf("\n");
 }
 return 0;
}
