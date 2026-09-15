#include <stdio.h> 

int main() { 
    int code;
    scanf("%d", &code);
    printf("%s", (code % 2 == 0) ? "Even" : "Odd");
    return 0;
}