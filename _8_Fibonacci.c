//8.Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,i;
    printf("Ente a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",fibonacci(i));
    return 0;
}
int fibonacci(int n)
{
    if(n==1 || n==0)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}