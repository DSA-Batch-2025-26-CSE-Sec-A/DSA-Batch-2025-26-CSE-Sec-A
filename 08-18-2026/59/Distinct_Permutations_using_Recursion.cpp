#include<stdio.h>
#include<string.h>
int count=0;
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
int duplicate(char str[],int start,int end,char ch)
{
    int i;
    for (i=start;i<end;i++)
    {
        if (str[i]==ch)
            return 1;
    }
    return 0;
}
void permutation(char str[],int left,int right)
{
    int i;
    if (left==right)
    {
        printf("%s\n",str);
        count++;
        return;
    }
    for (i=left;i<=right;i++)
    {
        if (duplicate(str,left,i,str[i]))
            continue;
        swap(&str[left],&str[i]);
        permutation(str,left+1,right);
        swap(&str[left],&str[i]);
    }
}
int main()
{
    char str[9];
    printf("Enter the word: ");
    scanf("%8s",str);
    permutation(str,0,strlen(str)-1);
    printf("Total = %d",count);
    return 0;
}
