#include<stdio.h>
#include<string.h>
int count=0;
void swap(char *a,char *b){
    char temp= *a;
    *a=*b;
    *b=temp;
}

int alreadyUsed(char str[],int start,int current){
    int i;
    for(i=start;i<current;i++){
        if (str[i]==str[current]){
            return 1;
        }
    }
    return 0;
}

void permutation(char str[],int start,int end){
    int i;
    if(start==end){ //the base case
        printf("%s\n",str);
        count++;
        return;
    }

    for(i=start;i<=end;i++){

        if(alreadyUsed(str,start,i)){
            continue;
        }

        swap(&str[start],&str[i]);
        permutation(str,start + 1, end);
        swap(&str[start],&str[i]);
    }
}

int main(){
    char str[9];
    printf("Enter a string: ");
    scanf("%s",str);
    permutation(str,0,strlen(str)-1);
    printf("Total permutation: %d",count);
    return 0;
}
