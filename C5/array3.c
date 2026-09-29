#include <stdio.h>

int main()
{
    int score;
    int arr[11] = {0};
    while (1) { // 점수 입력받는 부분
        scanf("%d", &score);
        if (score == 0) {
            break;
        }
        arr[score / 10]++;
    }

    for (int i=10; i>=0; i--) {
        if (arr[i] > 0) {
            printf("%d점대 : %d명\n", i*10, arr[i]);
        }
    }
    return 0;
}