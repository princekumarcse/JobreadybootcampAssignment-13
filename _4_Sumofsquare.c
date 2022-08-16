//4.Write a recursive function to calculate sum of squares of first n natural numbers 
#include<stdio.h>
int sumofsquare(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d",sumofsquare(n));
    return 0;
}
int sumofsquare(int n)
{
    int s=0;
    if(n==0)
    return 0;
    s=(n*n) + sumofsquare(n-1);
    return s;
}