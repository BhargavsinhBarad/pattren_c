#include<stdio.h>


main()
{
	int i,j,k,l,m;


	for(i=5;i>=1;i--)
	{
  		for(k=1;k<=i;k++)
   		{
     		printf("*");
   		}
  		for(j=5;j>i;j--)
   		{
     		printf(" ");
   		}
  		for(l=5;l>i;l--)
   		{
     		printf(" ");
   		}
  		for(m=i;m>=1;m--)
   		{
   		printf("*");
   	}


  	printf("\n");
	}

	for(i=2;i<=5;i++)
	{
  		for(k=1;k<=i;k++)
   		{
    	 printf("*");
   		}
   		for(j=i;j<5;j++)
   		{
     		printf(" ");
   		}
  		for(l=i;l<5;l++)
   		{
     		printf(" ");
   		}
  		for(m=i;m>=1;m--)
   		{
     		printf("*");
   		}

  		printf("\n");
	}

}
