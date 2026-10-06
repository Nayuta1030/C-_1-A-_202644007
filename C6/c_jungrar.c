#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionsort(int arr[], int sizearr) {
    int listposition = 0;
    for (int i=0; i<sizearr-1; i++) {
        listposition = i;
        for (int j=i+1; j<sizearr; j++) { // 이하 = 최소값 찾아서 넣기
            if (arr[j] < arr[listposition]) { // 더 큰가 구분
                listposition = j; // listposition = arr[]에 들어갈 변수 위치
            }
        if (i != listposition) { // 현재 자신의 위치가 맞는 위치면 변경 X
                int imshi = arr[i]; // 바뀔 자리의 숫자 저장
                arr[i] = arr[listposition]; // 바뀔 숫자를 바뀔 자리에 넣기
                arr[listposition] = imshi; // 바뀐 자리에 바뀔 자리에 있던 숫자 저장
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

    selectionsort(arr, sizearr);

    printf("정렬 이후의 배열: [");
    for (int i=0; i<sizearr; i++) {
        printf("%d ", arr[i]);
    }
    printf("] \n");
    return 0;
}