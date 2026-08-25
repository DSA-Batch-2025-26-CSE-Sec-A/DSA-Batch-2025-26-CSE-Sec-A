#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

bool palindrom(char *str, int start, int end);
int main(){
    char *str;
    getchar();
    printf("Enter:");
    fgets(str,100,stdin);
    int end=(strlen(str))-1;
    int start=0;
    printf("\n%s is %s",str,(palindrom(str,start,end)?"palindrom":"Not palindrom"));
    return 0;
}
bool palindrom(char *str,int start, int end){
    if(start>=end){
        return true;
    }
    if(!(isalpha((unsigned char)str[start]))){
        return palindrom(str,start+1,end);
    }
    if(!(isalpha((unsigned char)str[end]))){
        return palindrom(str,start,end-1);
    }
    if(tolower((unsigned char)str[start])!=tolower((unsigned char)str[end])){
        return false;
    }
    return palindrom(str,start+1,end-1);
}