#include<stdio.h>
int digit_Sum(int n)
{
    if(n==0)
        return 0;
    return n%10 + digit_Sum(n/10);
}
int digital_Root(int n)
{
    if(n<10)
        return n;
    return digital_Root(digit_Sum(n));
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Digit Sum is %d",digit_Sum(a));
    printf("\nDigital Root is %d",digital_Root(a));
    return 0;
}
