#include<stdio.h>
int count=0;
void discArrange(int n,char source,char auxiliary,char destination){
    if(n==1){
        printf("Move disc 1 from %c to %c\n",source,destination);
        count++;
        return;
    }

    discArrange(n-1,source,destination,auxiliary);
    printf("Move disc %d from %c to %c\n",n,source,destination);
    count++;
    discArrange(n-1,auxiliary,source,destination);
}

int main(){
    int n;
    printf("Enter number of disc(1 to 15): ");
    scanf("%d",&n);
    if(n>15){
        printf("Please enter no. of disc between 1 to 15 only");
    }else{
        discArrange(n,'A','B','C');
    }
    printf("Total moves: %d",count);
    return 0;
}
