#include <stdio.h>

int main_array(void) {
    /*Array*/
    /*int subway_1 = 30;
    int subway_2 = 40;
    int subway_3 = 50;

    printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
    printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
    printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);*/

    /*int subway_array[3];

    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (int i = 0; i < 3; i++) {
        printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
    }*/

    /*값 설정 방법*/
    /*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }*/

    /*값은 초기화를 반드시 해야 함*/
    /*int arr[10];
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }*/

    /*배열 크기는 항상 상수로 선언*/
    /*int size = 10;
    int arr[size];*/

    /*int arr[10] = { 1,2 };
    for (int i = 0; i < 10; i++)
    {
        printf
        ("%d\n", arr[i]);
    }*/

    /*int arr[] = { 1,2 };
    int arr[2];*/

    /*float arr_f[5] = { 1.0f,2.0f,3.0f };
    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", arr_f[i]);
    }*/

    /*char vs. string*/
    /*char c = 'A';
    printf("%c\n", c);*/

    /*문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함 되어야 함*/
    /*char str[7] = "coding";
    printf("%s\n", str);*/

    char str[] = "coding";
    /*printf("%s\n", str);
    printf("%d\n", sizeof(str));*/

    /*for (int i = 0; i < sizeof(str); i++)
    {
        printf("%c\n", str[i]);
    }*/

    /*char kor[] = "나도 코딩";
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor));*/

    /*char c_array[7] = { 'c','o','d','i','n','g','\0' };
    printf("%s\n", c_array);*/

    //char c_array[10] = { 'c','o','d','i','n','g' };
    //printf("%s\n", c_array);
    //for (int i = 0; i < sizeof(c_array); i++)
    //{
    //    printf("%c\n", c_array[i]);
    //}for (int i = 0; i < sizeof(c_array); i++)
    //{
    //    printf("%d\n", c_array[i]);//*ASCII Code*/
    //}

    /*ASCII Code*/
    /*7bit.총 128 개 (0~127)*/
    /*a   :   97*/
    /*A   :   65*/
    /*0   :   48*/

    /*printf("%c\n", 'a');
    printf("%d\n", 'a');

    printf("%c\n", 'b');
    printf("%d\n", 'b');

    printf("%c\n", 'A');
    printf("%d\n", 'A');

    printf("%c\n", '\0');
    printf("%d\n", '\0');

    printf("%c\n", '1');
    printf("%d\n", '1');

    printf("%c\n", '0');
    printf("%d\n", '0');*/

    for (int i = 0; i < 128; i++)
    {
        printf("ASCII Code 정수 %d : %c\n", i, i);
    }

    return 0;
}