#include<stdio.h>
int sum_of_digits(int n);
int main(){
    int n;
    printf("Enter:");
    scanf("%d",&n);
    // int m=sum_of_digits(n);
    // while(m>10){
        
    //      printf("%d\t",m);
    //      if(m>10){
    //          m=sum_of_digits(m);
    //      }
       
    // }
    // printf("\n%d\t",m);
     printf("\n%d",sum_of_digits(n));
     printf("\n%d",sum_of_digits(sum_of_digits(n)));
    
    return 0;

}
int sum_of_digits(int n){
    if(n<10){
        return n;
    }
    int m=(n%10)+sum_of_digits(n/10);
    return m;
  
    
}