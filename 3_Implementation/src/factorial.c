#include<stdio.h>
int factorial(int n)
{
    int i,fact=1;
    if (n<0)
    {
        printf("\nerror");
        return 0;
    } 
    for(i=1;i<=n;i++)
    fact=fact*i;   
    return fact; 
}
