#include<stdio.h>
int  bsearch(int ar[],int l,int h,int item){
    int i;
    int mid=(l+h)/2;
    while(ar[mid]!=item && l<=h){
        if(item>ar[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=(l+h)/2;
    }
    if(ar[mid]==item){
        return mid;
    }
    else{
        return -1;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/4;
    int l=0,h=n-1;
    int sc;
    printf("search=");
    scanf("%d",&sc);
    int i= bsearch(a,l,h,sc);
    if (i!=-1)
    	printf("\n%d is present in index %d ",a[i],i);
    else 
    	printf("not found");
}

