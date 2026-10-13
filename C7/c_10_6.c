#include <stdio.h>

void printer(void*ptr, char type) {
    switch (type)
    {
    case 'a':
        printf("%d\n", *(int*)ptr);
        break;
    case 'b':
        printf("%f\n", *(float*)ptr);
        break;
    case 'c':
        printf("%c\n", *(char*)ptr);
        break;
    }
}

int main() {
    int a = 10;
    float b = 6.6;
    char c = 'a';

    printer(&a, 'a');
    printer(&b, 'b');
    printer(&c, 'c');
}