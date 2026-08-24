#include <stdio.h>

int nsum(int n){
	if(n<=1)
	return n;
	else
	return n+nsum(n-1);
}

int main(){
    int i;
    printf("enter number: ");
    scanf("%d",&i);
    printf("%d",nsum(i));
}
