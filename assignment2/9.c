#include<stdio.h>
int main()
{
     int intType;
    float floatType;
    double doubleType;
    char charType;
    
    printf("Size of char: %ld byte\n",sizeof(char));
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %1d  bytes\n",sizeof(float));
    printf("Size of double: %ld bytes", sizeof(double));
    return 0;
}

