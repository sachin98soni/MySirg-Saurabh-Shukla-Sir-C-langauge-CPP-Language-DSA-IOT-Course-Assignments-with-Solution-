#include<stdio.h>
int main ()
{
      int a ,sum=0 ,rem=0,extra=0;
      printf("Enter a three digit number");
      scanf("%d",&a);
      rem=a%10;
      a=a/10;
      sum=sum+rem;

       rem=a%10;
      a=a/10;
      sum=sum+rem;

       rem=a%10;
      a=a/10;
      sum=sum+rem;

      printf("sum is=%d",sum);
      return 0;
}