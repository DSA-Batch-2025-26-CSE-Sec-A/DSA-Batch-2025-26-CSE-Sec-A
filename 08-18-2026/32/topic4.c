#include<stdio.h>
int digitalsum( int n){
	if(n == 0)
	return 0;
	return (n % 10) + digitalsum(n/10);
}
int digitalroot( int n)
{
	if (n < 10)
	return n;
	return digitalroot(digitalsum(n));
}
int main(){
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("%d %d",&digitalsum , digitalroot);
	return 0;
}
