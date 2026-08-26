#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define STR_LEN 100

typedef struct {
    char arr[MAX][STR_LEN];
    int front;
    int rear;
} StringQueue;

void initQueue(StringQueue* q) {
    q->front = 0;
    q->rear = -1;
}

int isEmpty(StringQueue* q) {
    return q->front > q->rear;
}

void enqueue(StringQueue* q, char* str) {
    strcpy(q->arr[++q->rear], str);
}

void dequeue(StringQueue* q, char* outStr) {
    if (!isEmpty(q)) {
        strcpy(outStr, q->arr[q->front++]);
    }
}

StringQueue sq1, sq2;

void pushString(char* str) {
    enqueue(&sq2, str);
    char temp[STR_LEN];
    
    while (!isEmpty(&sq1)) {
        dequeue(&sq1, temp);
        enqueue(&sq2, temp);
    }
    while (!isEmpty(&sq2)) {
        dequeue(&sq2, temp);
        enqueue(&sq1, temp);
    }
}

void popString(char* outStr) {
    dequeue(&sq1, outStr);
}

void prefixToInfixQueue(char* exp) {
    initQueue(&sq1);
    initQueue(&sq2);
    
    char op1[STR_LEN], op2[STR_LEN], temp[STR_LEN], symbol[2];
    symbol[1] = '\0';
    
    int len = strlen(exp);
    for (int i = len - 1; i >= 0; i--) {
        symbol[0] = exp[i];
        
        if (isalnum(exp[i])) {
            pushString(symbol);
        } else {
            popString(op1);
            popString(op2);
            
            strcpy(temp, "(");
            strcat(temp, op1);
            strcat(temp, symbol);
            strcat(temp, op2);
            strcat(temp, ")");
            
            pushString(temp);
        }
    }
    
    popString(temp);
    printf("Infix Expression: %s\n", temp);
}

int main() {
    char exp[MAX];
    printf("Enter Prefix Expression: ");
    scanf("%s", exp);
    prefixToInfixQueue(exp);
    return 0;
}
