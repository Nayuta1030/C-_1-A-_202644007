#include <stdio.h>

int main()
{
    int num1, num2;
    int numr2;
    scanf("%d %d", &num1, &num2);
    numr2 = num2;
    while(numr2 != 0) {
        printf("%d\n", num1*(numr2%10));
        numr2 /= 10;
    }
    printf("%d", num1 * num2);
    return 0;
}
