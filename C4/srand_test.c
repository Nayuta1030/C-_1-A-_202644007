#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number;
    int count = 0;
    int result = 0;
    srand((unsigned int)time(NULL));
    result = rand() % 100 + 1;
    
    while(1) {
        count++;
        scanf("%d", &number);
        
        if (result > number) {
            printf("답보다 작은 수입니다.\n");
        } else if (result < number) {
            printf("답보다 큰 수입니다.\n");
        } else {
            printf("답과 일치합니다.\n%d 번째에 정답을 맞췄습니다.\n", count);
            break;
        }
    }
    return 0;
}
