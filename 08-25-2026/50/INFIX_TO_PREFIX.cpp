#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100
char stack[N];
int top=-1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    return stack[top--];
}
int priority(char x)
{
    if(x=='^')
        return 3;
    if(x=='*'||x =='/')
        return 2;
    if(x=='+'||x =='-')
        return 1;
    return 0;
}
void reverse(char str[])
{
    int i,j;
    char temp;
    for (i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
int main()
{
    char infix[N],prefix[N],x;
    int i,j =0;
    printf("Enter infix expression: ");
    scanf("%s", infix);
    reverse(infix);
    for(i=0;infix[i]!='\0';i++)
    {
        if (infix[i]=='(')
            infix[i] =')';
        else if (infix[i]==')')
            infix[i] ='(';
    }
    top=-1;
    for (i=0;infix[i]!='\0';i++)
    {
        x=infix[i];
        if (isalnum(x))
        {
            prefix[j++]=x;
        }
        else if (x=='(')
        {
            push(x);
        }
        else if (x==')')
        {
            while (top!=-1&&stack[top]!='(')
                prefix[j++]=pop();
            pop();
        }
        else
        {
            while (top!=-1&&priority(stack[top])>priority(x))
            prefix[j++]=pop();
            push(x);
        }
    }
    while(top!=-1)
    prefix[j++]=pop();
    prefix[j]='\0';
    reverse(prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
