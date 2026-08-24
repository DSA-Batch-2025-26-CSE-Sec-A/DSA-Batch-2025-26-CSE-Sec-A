#include<stdio.h>
#include<string.h>
int inseart(char A[],int lb,int ub,int a,char item,int n);

int main(){
    char A[11]="ankanarpan";
    int lb=0;
    int ub=strlen(A);
    int n=sizeof(A);
    int a;
    char item;
    printf("index=");
    scanf("%d",&a);
    getchar();
    printf("\nitem=");
    scanf("%c",&item);
    printf("\n%s\n",A);
    
    inseart(A,lb,ub,a,item,n);
    printf("\n%s",A);
    return 0;
}
int inseart(char A[],int lb,int ub,int a, char item,int n){
    
    int i;
    if(ub==n-1){
        printf("Overflow");
        return -1;
    }
    for(i=ub;i>=a;i--){
        A[i+1]=A[i];
    }
    A[a]=item;
    
    ub++;
    A[ub]='\0';
    n++;
    
}