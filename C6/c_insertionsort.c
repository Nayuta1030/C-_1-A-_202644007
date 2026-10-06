#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionsort(int arr[], int sizearr) {
    int listposition = 0;
    int j; // 이하 arr[j+1]~~ 구문을 위해, 이곳에서 선언
    for (int i=1; i<sizearr; i++) {
        listposition = arr[i];
        for (j=i-1; j>=0 && arr[j]>listposition; j--) { // 이하 = 작업 반복
            arr[j+1] = arr[j]; // 값 정하기
            }
        arr[j+1] = listposition; // 값 슛
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

    selectionsort(arr, sizearr);

    printf("정렬 이후의 배열: [");
    for (int i=0; i<sizearr; i++) {
        printf("%d ", arr[i]);
    }
    printf("] \n");
    return 0;
}
