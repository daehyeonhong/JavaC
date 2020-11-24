#include <stdio.h>
#include <time.h>

int main_array_project(void) {
    srand(time(NULL));

    printf("\n\n == 아빠는 대머리 게임 == \n\n");

    int answer;
    int treatment = rand() % 4;

    int cntShowBottle = 0;
    int prevCntShowBottle = 0;

    for (int i = 1; i <= 3; i++)
    {
        int bottle[4] = { 0 };
        do
        {
            cntShowBottle = rand() % 2 + 2;
        } while (cntShowBottle == prevCntShowBottle);

        int isIncluded = 0;
        printf(" > %d번째 시도 : \n", i);

        for (int j = 0; j < cntShowBottle; j++)
        {
            int randBottle = rand() % 4;
            if (bottle[randBottle] == 0) {
                bottle[randBottle] = 1;
                if (randBottle == treatment)
                {
                    isIncluded = 1;
                }
            }
            else
            {
                j--;
            }
        }

        for (int k = 0; k < 4; k++)
        {
            if (bottle[k] == 1) {
                printf("%d ", k + 1);
            }
            printf("물약을 바릅니다.\n\n");

            if (isIncluded == 1) {
                printf(" >> 성공! 머리가 났어요! <<\n\n");
            }
            else {
                printf(" >> 실패! 머리가 나지 않았어요! <<\n\n");
            }
            printf("\n ...계속 하려면 아무 키나 누르세요...");
            getchar();

        }

        printf("\n\n 발모제는 몇 번일까요?");
        scanf_s("%d", &answer);

        if (answer == treatment + 1)
        {
            printf("\n >> 정답입니다! <<\n\n");
        }
        else {
            printf("\n >> 땡! 정답은 %d 입니다! <<\n\n", treatment + 1);
        }
    }
    return 0;
}