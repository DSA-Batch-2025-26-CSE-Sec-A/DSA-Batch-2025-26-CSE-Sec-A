#include <stdio.h>
int main(){
    int n , p;
    printf(" Enter A Number ");
    scanf("%d",&n);
    int arr[n];
    printf(" The Array Is ");
    for ( int i=0;i<=(n-1);i++ ){
         scanf("%d",&arr[i]);
         }
    printf(" Enter the deleting portion "); 
    scanf("%d",&p);
    for ( int i=p-1;i<(n-1);i++ ){
         arr[i]=arr[i+1];
         }
    for ( int i=0;i<(n-1);i++ ){
         printf("%d ", arr[i]);
         }     
         
   }