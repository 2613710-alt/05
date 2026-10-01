#include <stdio.h>

int main(void)
{
    int num;

    printf("정수 하나를 입력하시오 :");
    scanf("%i", &num);

    if (num > 0)
        printf("절대값은 %i 입니다.\n", num);
    else
        printf("절대값은 %i 입니다.\n", -num);

    return 0;
}