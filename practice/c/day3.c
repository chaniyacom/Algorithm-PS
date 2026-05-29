#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    int sum, diff, mul, div, rem;

    printf("첫번째 정수를 입력하고 엔터를 누르세요: ");
    scanf("%d", &num1);

    printf("두번째 정수를 입력하고 엔터를 누르세요: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    rem = num1 % num2;

    printf("\n--- 결과 창 ---\n");
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, diff);
    printf("%d * %d = %d\n", num1, num2, mul);
    printf("%d / %d의 몫: %d\n", num1, num2, div);
    printf("%d / %d의 나머지: %d", num1, num2, rem);
    return 0;
}
