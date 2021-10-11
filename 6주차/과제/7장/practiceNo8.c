#include <stdio.h>

int main(void)
{
    int i, sum = 1;

    printf("1부터 n까지의 곱 중에서 10000을 넘지 않는 가장 큰 곱은?\n");

    for (i = 1; i <= 10000; i++)
    {
        if (sum * i > 10000)
            break;

        sum *= i;
    }
    printf("1부터 %d까지의 곱이 %d입니다.\n", i - 1, sum);

    return 0;
}
