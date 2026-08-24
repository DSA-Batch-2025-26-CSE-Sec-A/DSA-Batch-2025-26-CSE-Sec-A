#include<stdio.h>
int delete(char A[],int lb,int ub,int a);

int main(){
    char A[20]="ankan";
    //printf("%d",sizeof(A));
    int lb=0;
    int ub=5;
    int a;
    printf("index=");
    scanf("%d",&a);
    printf("%s",A);
    delete(A,lb,ub,a);
    printf("\n%s",A);
    return 0;
}
int delete(char A[],int lb,int ub,int a){
    
     int i;
    if(ub==0){
        printf("Underflow");
        return -1;
    }
    for(i=a;i<ub;i++){
        A[i]=A[i+1];
    }

    ub--;
    //A[ub]='\0';
    
 }