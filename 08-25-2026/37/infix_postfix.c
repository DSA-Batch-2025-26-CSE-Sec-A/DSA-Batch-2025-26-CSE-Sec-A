#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char ch)
{
    top++;
    stack[top]=ch;
}
char pop()
{
    char ch=stack[top];
    top--;
    return ch;
}
int precedence(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return 0;
}
int main()
{
    char infix[100],postfix[100];
    int i=0,k=0;
    char ch;
    printf("Enter infix expression ");
    scanf("%s",infix);
    while(infix[i]!='\0')
    {
        ch=infix[i];
        if(isalnum(ch))
        {
            postfix[k]=ch;
            k++;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while(top!=-1 && stack[top]!='(')
            {
                postfix[k]=pop();
                k++;
            }
            pop();
        }
        else
        {
            while(top!=-1 && stack[top]!='(' && precedence(stack[top])>=precedence(ch))
            {
                postfix[k]=pop();
                k++;
            }
            push(ch);
        }
        i++;
    }
    while(top!=-1)
    {
        postfix[k]=pop();
        k++;
    }
    postfix[k]='\0';
    printf("Postfix expression is %s ",postfix);
    return 0;
}
