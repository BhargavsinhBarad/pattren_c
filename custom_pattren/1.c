#include<stdio.h>


main()
{
	int i,j,k;



	for(i=1;i<=5;i++)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*",j);
		}
		printf("\n");
	}
	
}
