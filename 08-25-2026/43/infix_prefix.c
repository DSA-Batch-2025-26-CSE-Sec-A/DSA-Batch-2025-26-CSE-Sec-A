#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct {
    char arr[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue* q) {
    q->front = 0;
    q->rear = -1;
}

int isEmpty(Queue* q) {
    return q->front > q->rear;
}

void enqueue(Queue* q, char val) {
    q->arr[++q->rear] = val;
}

char dequeue(Queue* q) {
    if (isEmpty(q)) return '\0';
    return q->arr[q->front++];
}

Queue q1, q2;

void push(char val) {
    enqueue(&q2, val);
    
    while (!isEmpty(&q1)) {
        enqueue(&q2, dequeue(&q1));
    }
    
    while (!isEmpty(&q2)) {
        enqueue(&q1, dequeue(&q2));
    }
}

char pop() {
    return dequeue(&q1);
}

char peek() {
    if (isEmpty(&q1)) return '\0';
    return q1.arr[q1.front];
}

int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

void reverseString(char* exp) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
}

void infixToPrefixQueue(char* exp) {
    initQueue(&q1);
    initQueue(&q2);
    
    reverseString(exp);
    
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') exp[i] = ')';
        else if (exp[i] == ')') exp[i] = '(';
    }
    
    char result[MAX];
    int j = 0;
    
    for (int i = 0; exp[i] != '\0'; i++) {
        char e = exp[i];
        
        if (isalnum(e)) {
            result[j++] = e;
        } else if (e == '(') {
            push(e);
        } else if (e == ')') {
            while (!isEmpty(&q1) && peek() != '(') {
                result[j++] = pop();
            }
            pop();
        } else {
            while (!isEmpty(&q1) && precedence(peek()) > precedence(e)) {
                result[j++] = pop();
            }
            push(e);
        }
    }
    
    while (!isEmpty(&q1)) {
        result[j++] = pop();
    }
    result[j] = '\0';
    
    reverseString(result);
    printf("Prefix Expression: %s\n", result);
}

int main() {
    char exp[MAX];
    printf("Enter Infix Expression: ");
    scanf("%s", exp);
    infixToPrefixQueue(exp);
    return 0;
}
