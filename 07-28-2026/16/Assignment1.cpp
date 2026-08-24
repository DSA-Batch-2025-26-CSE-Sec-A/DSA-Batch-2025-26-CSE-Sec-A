#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	printf("\n Enter %d element:",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("Array after deleting 1st element:");
	for(i=0;i<n;i++){
		printf("%d", arr[i]);
		printf("\t");
	}
	return 0;
}
