#include<stdio.h>
int main()
{
	int ar[]={5,2,3,4,1,8,6,9,},i,j,t;
	int s=sizeof(ar)/sizeof(ar[0]);
	
	printf("----Before shorting----\n");
	for(i=0;i<s;i++)
		printf("%d",ar[i]);
	for(i=0;i<s-1;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(ar[i]>ar[j])
			{
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	printf("\n----After shorting----\n");
	for(i=0;i<s;i++)
		printf("%d",ar[i]);
}
