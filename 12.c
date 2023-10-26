#include<stdio.h>
main()
{
    int i,j,a=1;
    char b='A';
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
              (i%2==0)?printf("%d ",a++):printf("%c ",b++);      
        }
        printf("\n");

    }
    
}