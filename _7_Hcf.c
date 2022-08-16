//7.Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int hcf(int n1, int n2) ;
int main()
{
    int num1 ,num2;
    printf("Enter Two number:");
    scanf("%d%d",&num1,&num2);
    printf("HCF of %d and %d is %d.", num1,num2, hcf(num1, num2));
    return 0;
}
int hcf(int x, int y)
 {
    if (y != 0)
        return hcf(y, x % y);
    else
        return x;
}
