#include <stdio.h>

int digit_sum(int n)
{
	if (n==0)
		return 0;
	return n%10+digit_sum(n/10);
}

int main(){
	int n;
	scanf("%d",&n,printf("Enter no:"));
	printf("Sum of digit:%d",digit_sum(n));
	
}
