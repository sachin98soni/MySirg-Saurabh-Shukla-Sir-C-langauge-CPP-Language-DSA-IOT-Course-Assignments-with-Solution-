#include<stdio.h>
int main()
{
    int i=1 ,x;
    printf("enter a number");
    scanf("%d",&x);
    while (i<=x)
    {
    printf("%d  ",i);
    printf("\n");

     i++;
    }
    return 0;
}