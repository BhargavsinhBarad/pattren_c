#include<stdio.h>

main()
{
	 int i=1;
	 

	 for(i=1;i<=7;i++)
	 {
		if(i==3)
			printf("* *     *");
		else if(i==4)
			printf("*   *   *");
		else if(i==5)
			printf("*     * *");
		else
			printf("*       *");
		printf("\n");
	 }
	 
}
