//6.Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Factorial is %d",factorial(x));
    return 0;
}
int factorial(int y)
{
    if(y==0)
    return 1;
    return y*factorial(y-1);

}