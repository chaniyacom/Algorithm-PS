#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    printf("--- 3일차: 함수와 배열 연습 ---\n\n");

    int num1 = 10, num2 = 20;
    int sum = add(num1, num2);
    int product = multiply(num1, num2);

    printf("함수 테스트: %d + %d = %d\n", num1, num2, sum);
    printf("함수 테스트: %d * %d = %d\n", num1, num2, product);
    
    printf("\n-----------------------------------\n\n");

    int scores[5];
    int total = 0;
    double average;

    printf("5명의 점수를 순서대로 입력받아 평균을 구합니다.\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생의 점수 입력: ", i + 1);
        scanf("%d", &scores[i]);
        
        total += scores[i];
    }

    average = (double)total / 5;

    printf("\n 결과 리포트\n");
    printf("총점: %d점\n", total);
    printf("평균: %.2f점\n", average);

    return 0;
}