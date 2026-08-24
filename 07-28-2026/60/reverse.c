#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter size:");
	scanf("%d",&size);
	int ar[size];
	printf("Enter data:");
	for (i=0;i<size;i++)
		scanf("%d",&ar[i]);
	printf("---Reverse array---");
	for (i=0,j=size-1;i<=(size-1)/2;i++,j--)
	{
		int a=ar[i];
		ar[i]=ar[j];
		ar[j]=a;
	}
	for (i=0;i<size;i++)
		printf("%d",ar[i]);
}
