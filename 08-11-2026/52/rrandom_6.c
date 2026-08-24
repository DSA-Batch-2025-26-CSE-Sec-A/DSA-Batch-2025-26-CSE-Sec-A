//Quick sorts
#include<stdio.h>
int main(){
    int A[]={80,30,10,90,2,0,11,45,55};
    int m=(sizeof(A)/sizeof(int))-1;
    int p=m;
    int i=p-1;
    int j=0;
    int t,s;
        while(p!=0){
            if(i<j){
                if(A[p]<A[j]){
                    t=A[p];
                    A[p]=A[j];
                    A[j]=t;
                }
                
                p=(j-1);
                i=p-1;
                j=0;
            }
            else{
                if((A[i]<A[p])&&(A[j]>A[p])){
                    t=A[i];
                    A[i]=A[j];
                    A[j]=t;
                    i--;
                    j++;
                }
                else{
                    if(A[i]>A[p]){
                        i--;
                    }
                    if(A[j]<A[p]){
                        j++;
                    }
                }
            }
        }
        // while(s==m){
        //     if(i>j){
        //         if(A[s]>A[j]){
        //             t=A[s];
        //             A[s]=A[j];
        //             A[j]=t;
        //         }
        //         s=(s+1);
        //         i=s+1;
        //         j=m;
        //     }
        //     else{
        //         if((A[i]>A[s])&&(A[j]<A[s])){
        //         t=A[i];
        //         A[i]=A[j];
        //         A[j]=t;
        //         i++;
        //         j--;
        //         }
        //         else{
        //             if(A[i]<A[s]){
        //                 i++;
        //             }
        //             if(A[j]>A[s]){
        //                 j--;
        //             }
        //         }
        //     }
          
        // }
    for(i=0;i<=m;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}