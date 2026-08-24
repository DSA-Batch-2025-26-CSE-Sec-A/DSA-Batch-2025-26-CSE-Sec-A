#include<stdio.h>
int main(){
	int arr[5]={72,95,102,105,110};
	int key;
	int low=0;
	int high=4;
	int mid;
	printf("search the number:");
	scanf("%d",&key);
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			printf("number is found:%d\n",key);
			printf("succesful found");
			return 0;
		}
		else if(key<arr[mid]){
		
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	printf("search unsuccesful found.");
	return 0;
}
