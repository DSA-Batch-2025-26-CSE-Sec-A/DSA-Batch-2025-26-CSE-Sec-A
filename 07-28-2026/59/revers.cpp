#include<stdio.h>
int main()
{
int arr[100],n,i,t;
printf("Enter number of elements : ");
scanf("%d",&n);
printf("\nEnter %d element :",n);
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<n/2;i++)
{
	t=arr[i];
	arr[i]=arr[n-1-i];
	arr[n-1-i]=t;
}
printf("Reverse array :");
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
	printf("\t");
}
return 0;
}
