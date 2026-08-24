#include<stdio.h>

int fact(int num)
{
    int product = 1;
    if (num == 0 || num == 1)
        return 1;
    else
        product = num*fact(num-1);
    return product;
}

int main()
{
    int num;
    printf("Enter the number whose factotial is to be found : ");
    scanf("%d",&num);
   printf("The factorial is %d.",fact(num)); 
}