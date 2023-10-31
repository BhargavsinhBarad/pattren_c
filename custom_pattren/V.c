#include<stdio.h>

main()
{
	int i;
	

	for(i=1;i<=7;i++)
	{
		if(i==6)
			printf("  * *");
		else if(i==7)
			printf("   *");
		else
			printf("*     *");
		printf("\n");
	}
	
}
