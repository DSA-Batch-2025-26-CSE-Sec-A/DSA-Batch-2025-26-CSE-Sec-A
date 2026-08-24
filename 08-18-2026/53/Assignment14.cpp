#include<stdio.h>
#include<math.h>
float root(float n){
	return sqrt(n);
}

int main(){
	float n;
	printf("Enter the number:");
	scanf("%f",&n);
	printf("Root of number:.%2f",root(n));
	return 0;
}
