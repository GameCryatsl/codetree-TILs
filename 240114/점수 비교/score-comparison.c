#include <stdio.h>

int main() {
    int a, b;
    int c, d;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    printf("%d", (a > c ? 1 : 0) && (b > d ? 1 : 0));

    return 0;
}