#include<stdio.h>
int lsearch(int ar[],int n,int size)
{
	int i;
	for( i=0;i<size;i++){
		if (ar[i]==n)
			return i;
    }return -1;
}

int main()
{
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int ar[size];
	int n,i,result;
	printf("enter elements of array:");
	for(i=0;i<size;i++)
		scanf("%d",&ar[i]);
	printf("Enter search data: ");
	scanf("%d",&n);
	result=lsearch(ar,n,size);
	if(result!=-1)
		printf("Found in index %d",result);
	else 
		printf("Not found");
}
