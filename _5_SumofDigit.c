//5.Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumofdigit(int );
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Sum of Digit is %d",sumofdigit(x));
    return 0;
}
int sumofdigit(int y)
{
    if(y==0)
    return 0;
    return sumofdigit(y/10) + y%10; 
}