#include<stdio.h>
main()
{
    int i,j,a=1;
    char b='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            (j%2==0)?printf("%c ",b++):printf("%d ",a++);
        }
        printf("\n");

    }
    
}