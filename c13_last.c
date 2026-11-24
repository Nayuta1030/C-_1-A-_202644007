#include <stdio.h>

int main() {
    float wido;
    float gyungdo;
    char info[80];
    int started = 0;

    puts("[");

    while (scanf("%f,%f,%79[^\r\n]", &wido, &gyungdo, info) == 3) {
        if (started)
            printf(",\n");
        else
            started = 1;
        printf("{\"wido\": %f, \"gyungdo\": %f, \"info\": \"%s\"}", wido, gyungdo, info);
    }
    puts("\n]");
    return 0;
}