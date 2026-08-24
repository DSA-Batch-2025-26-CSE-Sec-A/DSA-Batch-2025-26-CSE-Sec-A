#include<stdio.h>
int main()
{
	int a[]={72,95,102,105,110},low =0,high,mid,key,n=4,found=0;
	high=n;
	printf("Enter element to search :");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			printf("\n successfull search : %d found at index %d",key,mid);
			found=1;
			break;
		}
		else if(a[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
		if(found!=1)
		{
			printf("\n Unsuccesfull search:%d not present",key);
		}
return 0;
}
