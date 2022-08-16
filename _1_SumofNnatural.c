//1.Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d",sum(n));
    return 0;
} 
int sum(int n)
{
    int s=0;
    if(n==0)
    return;
    s=n+sum(n-1);
    return s;
}