#include <stdio.h>

void change_array(int arr[]);

int main()
{
    int arr[3] = {5,6,7};
    change_array(arr);
    printf("%d", arr[0]);
}

void change_array(int arr[])
{
    for (int i = 0; i<3; i++)
    {
        arr[i] = arr[i] * 2;
    }
}