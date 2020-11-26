#include<stdio.h>

//void swap(int a, int b);
//void swap_addr(int* a, int* b);
void changeArray(int* ptr);

int main_pointer(void) {
    /*Pointer*/
    //int john = 1, tim = 2, harry = 3;

    //printf("john네 주소 :%d, 암호 %d\n", &john, john);
    //printf("tim네 주소 :%d, 암호 %d\n", &tim, tim);
    //printf("harry네 주소 :%d, 암호 %d\n", &harry, harry);

    //int* mission;
    //mission = &john;
    //printf("mission이 방문하는 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    //mission = &tim;
    //printf("mission이 방문하는 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    //mission = &harry;
    //printf("mission이 방문하는 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    //mission = &john;

    //*mission = *mission * 3;
    //printf("mission이 암호를 바꾼 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    //mission = &tim;

    //*mission = *mission * 3;
    //printf("mission이 암호를 바꾼 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    //mission = &harry;

    //*mission = *mission * 3;
    //printf("mission이 암호를 바꾼 곳의 주소 : %d, 암호 : %d\n", mission, *mission);

    //int* spy = &john;

    //printf("\n ... Spy가 Mission 수행하는 중\n\n");
    //*spy = *spy - 2;
    //printf("\nSpy가 방문한 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    //spy = &tim;

    //printf("\n ... Spy가 Mission 수행하는 중\n\n");
    //*spy = *spy - 2;
    //printf("\nSpy가 방문한 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    //spy = &harry;

    //printf("\n ... Spy가 Mission 수행하는 중\n\n");
    //*spy = *spy - 2;
    //printf("\nSpy가 방문한 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    //printf("john네 주소 :%d, 암호 %d\n", &john, john);
    //printf("tim네 주소 :%d, 암호 %d\n", &tim, tim);
    //printf("harry네 주소 :%d, 암호 %d\n", &harry, harry);

    //printf("mission의 주소 : %d\n", &mission);
    //printf("spy의 주소 : %d\n", &spy);

    //int arr[3] = { 5,10,15 };
    //int* ptr = arr;
    //for (int i = 0; i < 3; i++) {
    //    printf("Array arr[%d]의 값 : %d\n", i, arr[i]);
    //}

    //for (int i = 0; i < 3; i++) {
    //    printf("Pointer ptr[%d]의 값 : %d\n", i, ptr[i]);
    //}
    //ptr[0] = 100;
    //ptr[1] = 200;
    //ptr[2] = 300;
    //for (int i = 0; i < 3; i++) {
    //    printf("Array arr[%d]의 값 : %d\n", i, arr[i]);
    //    printf("Array arr[%d]의 값 : %d\n", i, *(arr + i));
    //}

    //for (int i = 0; i < 3; i++) {
    //    printf("Pointer ptr[%d]의 값 : %d\n", i, ptr[i]);
    //    printf("Pointer ptr[%d]의 값 : %d\n", i, *(ptr + i));
    //}

    ///**(arr + i) == arr[i];*/
    ///*arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]*/
    //printf("arr 자체의 값 : %d\n", arr);
    //printf("arr[0] 자체의 값 : %d\n", &arr[0]);

    //printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
    //printf("arr[0]의 실제 값 : %d\n", *&arr[0]);
    //printf("arr[0]의 실제 값 : %d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]);
    //printf("arr[0]의 실제 값 : %d\n", arr[0]);

    /*swap*/
    /*int a = 10, b = 20;*/
    /*a 와 b의 값을 바꾼다*/
    /*printf("a의 주소 : %d\n", &a);
    printf("b의 주소 : %d\n", &b);

    printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
    swap(a, b);
    printf("Swap 함수 후 => a : %d, b : %d\n", a, b);*/
    /*값에 의한 복사 (Call by Value) => 값만 복사한다는 의미*/

    /*주소 값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면*/
    /*printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
    swap_addr(&a, &b);
    printf("Swap 함수 후 => a : %d, b : %d\n", a, b);*/

    /*배열일 때, arr2 => 주소*/
    int arr2[3] = { 10,20,30 };

    changeArray(arr2);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr2[i]);
    }

    return 0;

}

//void swap(int a, int b) {
//    printf("(Swap 함수 내)a의 주소 : %d\n", &a);
//    printf("(Swap 함수 내)b의 주소 : %d\n", &b);
//    printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
//    int temp = a;
//    a = b;
//    b = temp;
//    printf("Swap 함수 후 => a : %d, b : %d\n", a, b);
//}
//
//void swap_addr(int* a, int* b) {
//    printf("(Swap 함수 내)a의 주소 : %d\n", &a);
//    printf("(Swap 함수 내)b의 주소 : %d\n", &b);
//    printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//    printf("Swap 함수 후 => a : %d, b : %d\n", a, b);
//}

void changeArray(int* ptr) {
    ptr[2] = 50;
}