//10.Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int main()
{
    int num,power;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Enter power:\n");
    scanf("%d",&power);
    printf("Power of the Number is %d",calpow(num,power));
    return 0;
}
int calpow(int x,int y)
{
    if(y!=0)
    {
        return (x*calpow(x,y-1));
    }
    else
        return 1;
}
