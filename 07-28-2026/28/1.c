#include <stdio.h>
int main(){
    int n;
    printf(" Enter A Number ");
    scanf("%d",&n);
    int arr[n];
    printf(" The Array Is ");
    for ( int i=0;i<=(n-1);i++ ){
         scanf("%d",&arr[i]);
         }
    printf(" After Deleting 1st Element ");     
     for ( int i=0;i<(n-1);i++ ){
         printf("%d ", arr[i+1]);
         }
   }