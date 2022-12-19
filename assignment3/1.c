#include<stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
if(n>0)
{
    printf("%d is positive",n);
}
if(n<=0)
{
    printf(" %d is non positive",n);
}
return 0;
}