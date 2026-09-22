#include <stdio.h>

void factorial(int n) {
    if (n == 0) {
        return;
    }
    factorial(n-1);
    printf("%d\n", n);
}

int main() {
    int n;
    scanf("%d", &n);
    factorial(n);
    return 0;
}