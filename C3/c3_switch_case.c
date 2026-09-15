#include <stdio.h>

int main()
{
    int score;
    char grades;
    printf("학점을 입력해주세요(0~100): ");
    scanf("%d", &score);

    switch (score / 10) {
    case 10:
    case 9:
        grades = 'A';
        break;
    case 8:
        grades = 'B';
        break;
    case 7:
        grades = 'C';
        break;
    case 6:
        grades = 'D';
        break;
    default:
        grades = 'F';
        break;
    }

    printf("당신의 학점은 %c 입니다.", grades);

    return 0;
}