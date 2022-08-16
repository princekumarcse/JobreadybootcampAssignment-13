//2.Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumofodd(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d",sumofodd(n));
    return 0;
} 
int sumofodd(int n)
{
    int s=0;
    if(n==0)
    return 0;
    s=(2*n-1) + sumofodd(n-1);
    return s;

}