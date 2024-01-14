#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", ((a >= 10 ? 1 : 0) && ( a <= 20 ? 1 : 0))  == 1 ? "yes" : "no");
    return 0;
}