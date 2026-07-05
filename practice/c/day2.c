#include <stdio.h>

int main() {

    int score;
    printf("시험 점수를 입력하세요 (0~100): ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("결과: A 학점이야! 대단한데? \n");
    } else if (score >= 80) {
        printf("결과: B 학점이야. 훌륭해!\n");
    } else if (score >= 70) {
        printf("결과: C 학점이야. 좀 더 분발하자!\n");
    } else {
        printf("결과: 재수강의 기회가 열렸어...\n");
    }

    printf("\n-----------------------------------\n\n");

    int count;
    printf("카운트다운 시작할 숫자를 입력해줘: ");
    scanf("%d", &count);

    printf("\n 카운트다운을 시작합니다!\n");
    for (int i = count; i > 0; i--) {
        printf("%d...\n", i);
    }
    printf("발사!!\n");

    return 0;
}