#include<stdio.h>
int main()
{
    int x =6,result=0, count=0;
    result =x&1;
    count++;
    if(result==1)
    {
      printf("%d",count);  
    }
    x=x>>1;


    result =x&1;
    count++;
    if(result==1)
    {
      printf("%d",count);  
    }
    x=x>>1;
              return 0;
}