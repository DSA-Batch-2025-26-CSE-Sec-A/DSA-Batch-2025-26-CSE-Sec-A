#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[100][100];
int top=-1;
void push(char str[])
{
    top++;
    strcpy(stack[top],str);
}
void pop(char str[])
{
    strcpy(str, stack[top]);
    top--;
}
int main()
{
    char prefix[100];
    char op1[100],op2[100],temp[100];
    int i;
    printf("Enter prefix expression ");
    scanf("%s", prefix);
    for(i=strlen(prefix)-1;i>=0;i--)
    {
        if(isalnum(prefix[i]))
        {
            temp[0]=prefix[i];
            temp[1]='\0';
            push(temp);
        }
        else
        {
            pop(op1);
            pop(op2);
            temp[0]='\0';
            strcat(temp,op1);
            int len=strlen(temp);
            temp[len]=prefix[i];
            temp[len+1]='\0';
            strcat(temp,op2);
            push(temp);
        }
    }
    printf("Postfix expression is %s ",stack[top]);
    return 0;
}
