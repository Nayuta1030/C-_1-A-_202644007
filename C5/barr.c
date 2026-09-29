#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arraycleaner(int arr[], int sizearr) {
    for (int i=0; i<sizearr-1; i++) {
        for (int j=0; j<sizearr-i-1; j++) {
            if (arr[j] > arr[j +1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {0};
    int sizearr = sizeof(arr) / sizeof(arr[0]);

    srand(time(NULL));
    for (int i=0; i<5; i++) {
        arr[i] = rand() % 9 + 1;
    }
    printf("초기 상태 배열: [");
    for (int i=0; i<sizearr; i++) {
        printf("%d ", arr[i]);
    }
    printf("] \n");

    arraycleaner(arr, sizearr);

    printf("정렬 이후의 배열: [");
    for (int i=0; i<sizearr; i++) {
        printf("%d ", arr[i]);
    }
    printf("] \n");
    return 0;
}