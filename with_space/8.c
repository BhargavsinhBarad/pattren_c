#include<stdio.h>


main()
{
int i,j,k,l,m;


for(i=5;i>=1;i--)
{
  for(k=1;k<=i;k++)
   {
     printf("%d",k);
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
     printf("%d",m);
   }
  printf("\n");
}

}

