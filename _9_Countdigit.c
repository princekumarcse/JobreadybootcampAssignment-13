//9.Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int main()
{
    int num,count;
    printf("Enter a numbers:\n");
    scanf("%d",&num);
    printf("Number of digit %d",digit(num));
    return 0;
}
int digit(int x)
{
    static int counter;
    if(x>0)
    {
        counter=counter+1;
        return digit(x/10);
    }
    else
        return counter;
}
