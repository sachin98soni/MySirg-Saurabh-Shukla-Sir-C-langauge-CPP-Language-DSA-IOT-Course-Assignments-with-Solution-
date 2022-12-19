#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5==0)
    { printf("YES, %d is divide by 5",x);
    }
    else
    {
    printf("NO, %d is not divide by 5",x);
    }
    return 0;

}