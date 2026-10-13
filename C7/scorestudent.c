#include <stdio.h>

#define MAX_SIZE 50

void bubblejunglur(int*arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1)
                *(arr+j+1) = temp;
            }
        }
    }
}

int main() {
    int student;
    
    printf("학생 수를 입력해주세요 : "); // 학생 수 입력받기
    scanf("%d", &student);
    if (student > MAX_SIZE || student < 1) { // 1 미만 or 50 초과일 경우 작동
        printf("최대 학생수를 초과했거나, 최소 학생수 미만입니다.\n");
        return 1;
    }

    int studentscore[student]; // 입력된 학생 수 +1개의 배열 생성
    int *scorepointer = studentscore;
    for (int i=0; i<student; i++) { // for을 통해 번호별 학생 성적 입력
        printf("%d번 학생의 성적 입력 : ", i + 1);
        scanf("%d", scorepointer+i);
    }
    
    bubblejunglur(scorepointer, student); // 버블 정렬 호출

    printf("\n정렬된 성적 : "); // 버블 정렬을 통해 정돈된 배열을 순서대로 출력
    for (int i=0; i<student; i++) {
        printf("%d", *(scorepointer + i));
    }

    pirntf("\n최고 성적 : %d\n", *(scorepointer + student -1)); // 버블 정렬됨 => 배열+배열-1 => 최상위 = 최고 득점자
    pirntf("\n최하 성적 : %d\n", *scorepointer); // 위와 동일 => 가장 아래 = 최하 득점자

    return 0;
}
