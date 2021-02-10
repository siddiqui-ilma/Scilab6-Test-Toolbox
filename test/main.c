#include<stdio.h>
#include "trans.c"
//n=rows, m=columns
int main(void)
{
 int m , n ; 
 printf("Enter the number of rows:");
 scanf("%d",&n);   
 printf("Enter the number of columns:");
 scanf("%d",&m);              
 int arr[n][m];
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<m;j++)
   {
     scanf("%d",&arr[i][j]);    
   }
 }
 printf("\nOriginal Matrix:\n");
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<m;j++)
     printf("%5d ",arr[i][j]);
   printf("\n");
 }
 printf("\nTranspose of the Matrix\n");
 transpose(*arr, n, m); 
 return 0;
}
