#include <stdio.h>

int main(void)
{
    int count = 0;
    char c;

    printf("input a string: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            count++;
    }

    printf("the number of digits is %i\n", count);

    return 0;
}