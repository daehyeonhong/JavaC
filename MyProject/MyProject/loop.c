#include<stdio.h>

int main_loop(void) {
    /*loop*/
    /*for, while, do while*/

    /*for (declaration, condition, increase)*/
    /*
    printf("for\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Hello World%d\n", i);
    }*/

    /*while (condition)*/
    /*printf("while\n");
    int i = 0;
    while (i < 10) {
        printf("Hello World%d\n", i++);
    }*/

    /*do () while (condition)*/
    /*printf("do while\n");
    int i = 0;
    do
    {
        printf("Hello World%d\n", i++);
    } while (i < 10);*/

    /*duplication loop*/
    /*for (int i = 0; i < 3; i++)
    {
        printf("첫 번째 반복문 ==> %d\n", i);
        for (int j = 0; j < 5; j++)
        {
            printf("    두 번째 반복문 ==> %d\n", j);
        }
    }*/

    /*multiplication table*/
    /*for (int i = 2; i < 10; i++)
    {
        printf("%d단 계산\n", i);
        for (int j = 1; j < 10; j++)
        {
            printf("    %d * %d = %d", i, j, i * j);
        }
    }*/

    /*int input;
    printf("숫자를 입력하세요");
    scanf_s("%d", &input);*/

    /*for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    /*for (int i = input; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    /*for (int i = 0; i < input; i++)
    {
        for (int j = 0; j <= input; j++)
        {
            printf(j < i ? "*" : " ");
        }
        printf("\n");
    }

    for (int i = 0; i < input; i++) {
        for (int j = i; j < input - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }*/


    int floor;

    printf("몇 층으로 쌓겠습니까?");

    scanf_s("%d", &floor);

    for (int i = 0; i < floor; i++) {
        for (int j = i; j < floor - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}