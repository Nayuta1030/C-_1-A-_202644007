#include <stdio.h>

int main() {
    int a = 100;
    int *p;
    p = &a;

    printf("(*p)++ = %d\n", (*p)++);
    printf("(*p)+1 = %d\n", (*p)+1);
    printf("*p+=1 = %d\n", *p+=1);
    printf("*p=*p+1 = %d\n", *p=*p+1);
    printf("++*p = %d\n", ++*p);
}