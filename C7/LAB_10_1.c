#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int* TStart;
    int* TEnd;

    printf("정방향 : ");
    for (TStart = arr, TEnd = arr + MAX_SIZE; TStart < TEnd; TStart++) {
        printf("%3d", *TStart);
    }
    printf("\n");

    printf("역방향 : ");
    for (TStart = TEnd  -1; TStart >= arr; TStart--) {
        printf("%3d", *TStart);
    }
    printf("\n");

    return 0;
}