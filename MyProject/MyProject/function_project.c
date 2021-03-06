#include <stdio.h>
#include<time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void failure();

int main_password_master(void) {
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        /*printf("%d x %d ?" num1, num2);*/
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf_s("%d", &answer);

        if (answer == -1)
        {
            printf("프로그램을 종료합니다.\n");
            exit(0);
        }
        else if (answer == num1 * num2)
        {
            success();
            count++;
        }
        else {
            failure();
        }

    }

    printf("당신은 5개의 비밀번호 중 %d개를 맞췄습니다!", count);

    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n########### %d 번째 비밀번호 ###########\n\n\n", level);
    printf("\n\t%d x %d는 \n\n", num1, num2);
    printf("#################################\n");
    printf("\n비밀번호를 입력하세요 ==> (종료 : -1)");
}

void success() {
    printf("\n >> Good! 정답입니다!!\n");
}

void failure() {
    printf("\n >> 땡! 틀렸습니다!!\n");
}