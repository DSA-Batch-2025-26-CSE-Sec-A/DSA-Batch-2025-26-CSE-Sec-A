#include<stdio.h>
#include<string.h>
#include<ctype.h>
int palindrome(char str[],int left,int right)
{
    if (left>=right)
        return 1;
    if (!isalpha(str[left]))
        return palindrome(str,left+1,right);
    if (!isalpha(str[right]))
        return palindrome(str,left,right-1);
    if (tolower(str[left])!=tolower(str[right]))
        return 0;
    return palindrome(str,left+1,right-1);
}
int main()
{
    char str[201];
    fgets(str,sizeof(str),stdin);
    if (palindrome(str,0,strlen(str)-1))
        printf("YES");
    else
        printf("NO");
    return 0;
}
