#include<stdio.h>

int main_condition(void) {

    /*if(condition){}else{}*/

    /*int age = 7;

    if (age >= 20) {
        printf("일반인입니다.");
    }
    else {
        printf("학생입니다.");
    }

    printf("\n");
    printf(age < 8 ? "어린이입니다." : age >= 8 && age <= 13 ? "초등학생입니다." : age >= 14 && age <= 16 ? "중학생입니다." : age >= 17 && age <= 19 ? "고등학생입니다." : "일반인입니다.");
    printf("\n");*/

    /*break / continue*/
    /*for (int i = 1; i <= 30; i++) {
        if (i >= 6) {
            printf("나머지 학생은 집에 가세요!\n");
            break;
        }
        printf("%d번 학생은 조별 발표 준비를 하세요!\n", i);
    }*/

    /*for (int i = 1; i < 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            printf("%d번 학생은 결석입니다\n", i);
            continue;
        }
        printf("%d번 학생은 조별 박표 준비를 하세요!\n", i);
    }*/

    /*int a = 10, b = 11, c = 12, d = 12;

    if (a == b || c == d) {
        printf("a와 b, 혹은 c와 d의 값이 같습니다\n");
    }
    else
    {
        printf("값이 서로 다르네요\n");
    }*/

    /*가위 바위 보*/
    /*srand(time(NULL));

    int i = rand() % 3;

    printf(i == 0 ? "가위" : i == 1 ? "바위" : i == 2 ? "보" : "몰라요");*/

    /*switch (switch_on)
    {
    case condition: result;
    default:
        break;
    }*/

    /*srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
    case 0:printf("가위"); break;
    case 1:printf("바위"); break;
    case 2:printf("보"); break;
    default:printf("몰라요"); break;
    }*/

    /*int age = 21;
    switch (age)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:printf("어린이입니다."); break;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:printf("초등학생입니다."); break;
    case 14:
    case 15:
    case 16:printf("중학생입니다."); break;
    case 17:
    case 18:
    case 19:printf("고등학생입니다."); break;

    default:printf("학생이 아닌가 봐요.");
        break;
    }*/

    /*Up and Down*/
    srand(time(NULL));
    int num = rand() % 100 + 1;
    printf("숫자 ==> %d", num);
    int answer = 0;
    int chance = 5;
    while (chance > 0)
    {
        printf("남은 기회 %d 번\n", chance--);
        printf("숫자를 맞혀보세요 (1~100) : ");
        scanf_s("%d", &answer);

        if (answer > num) {
            printf("DOWN ↓ \n\n");
        }
        else if (answer < num) {
            printf("UP ↑ \n\n");
        }
        else if (answer == num) {
            printf("정답입니다!\n\n");
            break;
        }
        else {
            printf("알 수 없는 오류가 발생했어요\n\n");
        }

        if (chance == 0)
        {
            printf("모든 기회를 소진하셨습니다.\n\n"); break;
        }
    }

    return 0;
}