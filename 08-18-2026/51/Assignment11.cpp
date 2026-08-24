#include<stdio.h>
int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	
	
	
}
return fact;
}


int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	
printf("factorial:%d",fact(n));
return 0;	
}
