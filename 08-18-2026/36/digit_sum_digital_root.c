#include <stdio.h>
int sum(int a) {
    if (a == 0)
        return 0;
    return (a % 10) + sum(a / 10);
}
int root(int a) {
    if (a < 10)
        return a;
    return root(sum(a));
}
int main() {
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    printf("%d %d", sum(n), root(n));
    return 0;
}
