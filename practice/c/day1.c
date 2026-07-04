#include <stdio.h>
int main() {
    printf("안녕, 2026년 방학 코딩 연습 시작이야!\n");
    printf("===========================================\n");

    int age = 20;
    double height = 170.5;

    printf("내 나이는 %d살이고, 키는 %.1fcm야.\n", age, height);

    int target_days;
    printf("이번 방학동안 며칠동안 공부할거야? 숫자로 입력해줘: ");
    scanf("%d", &target_days);

    printf("\n대단해! 앞으로 %d일 동안 지치지 말고 화이팅 하자!\n", target_days);
}