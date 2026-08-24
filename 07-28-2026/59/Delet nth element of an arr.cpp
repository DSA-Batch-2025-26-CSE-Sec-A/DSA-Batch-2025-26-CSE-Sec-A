#include<stdio.h>
int main()
{
	int n,arr[100],i,p;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("\nEnter %d element :",n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	} 
	printf("\n Enter position to delete :");
	scanf("%d",&p);
	for(i=p-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("Array after deletion :");
	for(i=0;i<n;i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
