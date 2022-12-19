# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}
