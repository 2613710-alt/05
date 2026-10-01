#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int i;

    printf("input a number :");
    scanf("%i", &num);

    for (i = 0; i < num; i++)
        sum = sum + i+1;

    printf("The result is %i\n", sum);

    return 0;
}