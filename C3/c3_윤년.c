#include <stdio.h>

int main()
{
    int year;
    printf("연도를 입력해주세요(예: 2007) : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("현재 연도인 %d년은 윤년입니다.", year);
    }
    else {
        printf("현재 연도인 %d년은 윤년이 아닙니다.", year);
    }
}
