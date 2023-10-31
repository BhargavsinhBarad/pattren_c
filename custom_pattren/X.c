#include<stdio.h>

main()
{
	int i;
	

	for(i=1;i<=7;i++)
	{
		if(i==4)
			printf("     *");
		else if(i==3||i==5)
			printf("    * *");
		else if(i==2||i==6)
			printf("   *   *");
		else
			printf("  *     *");
		printf("\n");
	}
	
}
