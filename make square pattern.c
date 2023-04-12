//make square pattern
#include<stdio.h>
int main()
{
int i,j,k,n;
printf("enter the number of row=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("*");
    }
    for(k=2;k<=n;k++)
    {
        printf(" ");
    }
    printf("\n");
}
return 0;
}
