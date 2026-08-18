#include <stdio.h>

int factorial(int n){
	if(n<=1)
	return 1;
	else
	return n*factorial(n-1);
}

int main(){
    int i ;
    printf("enter number: ");
    scanf("%d",&i);

    if(i>=20){
        printf("the number is over the limit\n");
    }

    int result = factorial(i);
    printf("factorial: %d",result);
}