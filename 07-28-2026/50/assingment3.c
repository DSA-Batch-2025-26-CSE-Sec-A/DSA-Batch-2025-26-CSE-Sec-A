#include<stdio.h>
int main()
{
	int arr[100],n,p,v,i;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("\nEnter %d element :",n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	} 
	printf("\n Enter position to delete :");
	scanf("%d",&p);
	printf("Enter value to insert :");
	scanf("%d",&v);
	for(i=n;i>=p;i--)
	{
		arr[i]=arr[i-1];
	}
	n++;
	arr[p-1]=v;
	printf("Array after insertion :");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
		printf("\t");
	}
	return 0;
}
