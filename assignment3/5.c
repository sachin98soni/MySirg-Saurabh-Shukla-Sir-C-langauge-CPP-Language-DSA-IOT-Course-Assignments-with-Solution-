#include<stdio.h>
int main ()
{
    int x;
    printf("enter a 3 number");
    scanf("%d",&x);
    x<1000 && x>99 ? printf("%d is 3 digit number",x) :printf("%d is not 3 digit number",x);
    return 0;

}