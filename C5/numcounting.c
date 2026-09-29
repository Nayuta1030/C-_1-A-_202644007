#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num[3] = {0}; // A~C의 값 저장 배열
    int num2 = 0; // A~C의 곱
    int num3[10] = {0}; // 나머지값(예정)
    srand(time(NULL)); 
    for (int i=0; i<3; i++) {
        num[i] = rand() % 900 + 100;
        printf("%d\n", num[i]);
    }
    num2 = num[0] * num[1] * num[2];
    while (num2 > 0 ) {
        num3[num2 % 10]++;
        num2 /= 10;        
    }
    for (int i=0; i<10; i++) {
        printf("%d의 개수 : %d\n", i, num3[i]);
    }
    return 0;
}