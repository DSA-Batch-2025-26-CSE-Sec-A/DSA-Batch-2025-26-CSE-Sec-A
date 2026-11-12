#include<stdio.h>
int main(){
    int a[100],n,pos,i;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
    scanf("%d"&a[i]);
}
printf("enter position to delete:");
scanf("%d",pos);
for(i=pos-1;i<n-1;i++){
    a[i]=a[i+1];
}
n--;
printf("array after deletion:\n");
for(i=0;i<n;i++){


printf("%d",a[i])
}
return 0;
}