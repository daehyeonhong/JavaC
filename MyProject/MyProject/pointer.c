#include<stdio.h>

int main(void) {
    /*Pointer*/
    int john = 1, tim = 2, harry = 3;

    printf("john네 주소 :%d, 암호 %d\n", &john, john);
    printf("tim네 주소 :%d, 암호 %d\n", &tim, tim);
    printf("harry네 주소 :%d, 암호 %d\n", &harry, harry);

    int* mission;
    mission = &john;
    printf("mission이 방문하는 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    mission = &tim;
    printf("mission이 방문하는 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    mission = &harry;
    printf("mission이 방문하는 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    mission = &john;

    *mission = *mission * 3;
    printf("mission이 암호를 바꾼 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    mission = &tim;

    *mission = *mission * 3;
    printf("mission이 암호를 바꾼 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    mission = &harry;

    *mission = *mission * 3;
    printf("mission이 암호를 바꾼 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    int* spy = &john;

    printf("\n ... Spy가 Mission 수행하는 중\n\n");
    *spy = *spy - 2;
    printf("\nSpy가 방문한 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    spy = &tim;

    printf("\n ... Spy가 Mission 수행하는 중\n\n");
    *spy = *spy - 2;
    printf("\nSpy가 방문한 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    spy = &harry;

    printf("\n ... Spy가 Mission 수행하는 중\n\n");
    *spy = *spy - 2;
    printf("\nSpy가 방문한 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    printf("john네 주소 :%d, 암호 %d\n", &john, john);
    printf("tim네 주소 :%d, 암호 %d\n", &tim, tim);
    printf("harry네 주소 :%d, 암호 %d\n", &harry, harry);

    printf("mission의 주소 : %d\n", &mission);
    printf("spy의 주소 : %d\n", &spy);

    int arr[3] = { 5,10,15 };
    int* ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("Array arr[%d]의 값 : %d\n", i, arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Pointer ptr[%d]의 값 : %d\n", i, ptr[i]);
    }
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for (int i = 0; i < 3; i++) {
        printf("Array arr[%d]의 값 : %d\n", i, arr[i]);
        printf("Array arr[%d]의 값 : %d\n", i, *(arr + i));
    }

    for (int i = 0; i < 3; i++) {
        printf("Pointer ptr[%d]의 값 : %d\n", i, ptr[i]);
        printf("Pointer ptr[%d]의 값 : %d\n", i, *(ptr + i));
    }

    /**(arr + i) == arr[i];*/
    /*arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]*/
    printf("arr 자체의 값 : %d\n", arr);
    printf("arr[0] 자체의 값 : %d\n", &arr[0]);

    printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);

    return 0;
}