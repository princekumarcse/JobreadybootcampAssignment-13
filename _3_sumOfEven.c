//3.Write a recursive function to calculate sum of first N even natural numbers 
#include<stdio.h>
int sumofeven(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d",sumofeven(n));
    return 0;
}
int sumofeven(int n)
{
    int s=0;
    if(n==0)
    return ;
    s=2*n + sumofeven(n-1);
    return s;
}