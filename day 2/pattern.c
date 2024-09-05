#include<stdio.h>
void main(){
int i,j,k;
for(i=0;i<4;i++)
{
    for(k=3;k>i;k--)
    {
        printf(" ");
    }
    
    for(j=0;j<=i;j++)

    {
      printf("* ");
    }printf("\n");
}}
