#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age = 20;
    double height = 175.5;
    char grade = 'A';

    printf("나이: %d살\n", age);
    printf("키: %fcm\n", height);
    printf("학점: %c\n", grade);

    printf("키: %.1fcm\n", height);
    return 0;
}
