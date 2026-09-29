#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dice[7] = {0};
    int dice_value = 0;

    for (int i=0; i<10; i++)
    {
        dice_value = rand() % 6 + 1;
        dice[dice_value] += 1;
    }
    for (int i=1; i<7; i++)
    {
        printf("%d : %d\n", i, dice[i]);
    }
}