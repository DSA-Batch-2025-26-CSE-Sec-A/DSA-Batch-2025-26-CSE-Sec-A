#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[100][100];
int top=-1;
void push(char str[])
{
    top++;
    strcpy(stack[top], str);
}
void pop(char str[])
{
    strcpy(str, stack[top]);
    top--;
}
int main()
{
    char postfix[100];
    char op1[100],op2[100],temp[100];
    int i;
    printf("Enter postfix expression ");
    scanf("%s", postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isalnum(postfix[i]))
        {
            temp[0]=postfix[i];
            temp[1]='\0';
            push(temp);
        }
        else
        {
            pop(op2);
            pop(op1);
            temp[0]='(';
            temp[1]='\0';
            strcat(temp, op1);
            int len=strlen(temp);
            temp[len]=postfix[i];
            temp[len+1]='\0';
            strcat(temp, op2);
            len=strlen(temp);
            temp[len]=')';
            temp[len+1]='\0';
            push(temp);
        }
    }
    printf("Infix expression is %s ",stack[top]);
    return 0;
}
