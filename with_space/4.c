#include<stdio.h>

main()
{
  int i,j,k;

  for(i=5;i>=1;i--)
  {
    for(k=i;k<=4;k++){
        printf(" ");
        
    }
    for(j=i;j>=1;j--)
    {
        (j%2==0)?printf("0"):printf("1");
    }
    printf("\n");
  }
}