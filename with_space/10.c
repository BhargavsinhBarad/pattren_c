#include<stdio.h>

main(){
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
          printf("%d",j);

        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }

    printf("\n");
    }


}