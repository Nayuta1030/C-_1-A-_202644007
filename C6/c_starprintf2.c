#include <stdio.h>

void star() {
    for (int i=1; i<4; i++) {
        for (int j=0; j<i; j++) {
            printf("★");
        }
        printf("\n");
    }
    // 증가
    for (int i=3; i>0; i--) {
        for (int j=0; j<i; j++) {
            printf("★");
        }
        printf("\n");
    }
    // 감소
    // ↑ 위는 fot문 4개 사용
    // ↓ 아래는 for문 1개 사용
    // for (int i=1; i<7; i++) {
    //     int star;
    //     if (i<=3) {
    //         star = i
    //     }
    //     else {
    //         star = 7-i;
    //     }
    //     for (intj=1; j<=star; j++) {
    //         printf("*"); 
    //     }
    //     printf("\n");
    // }

}

int main() {
    star();
}
