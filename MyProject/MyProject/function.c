#include<stdio.h>

//declaration
void p(int num);

void function_without_return();
int function_with_return();
void function_without_parameters();
void function_with_parameters(int num1, int num2, int num3);

int apple(int total, int ate);

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_funtion(void) {
    /*function
    calculator*/

    //int num = 2;
    ///*printf("num은 %d 입니다.\n", num);*/
    //p(num);

    //num += 3;
    ///*printf("num은 %d 입니다.\n", num);*/
    //p(num);

    //num -= 1;
    ///*printf("num은 %d 입니다.\n", num);*/
    //p(num);

    //num *= 3;
    ///*printf("num은 %d 입니다.\n", num);*/
    //p(num);

    //num /= 3;
    ///*printf("num은 %d 입니다.\n", num);*/
    //p(num);

    /*함수 종류*/
    /*반환 값이 없는 함수*/

    function_without_return();

    /*반환 값이 있는 함수*/
    int ret = function_with_return();
    p(ret);

    /*parameter(전달 값)가 없는 함수*/
    function_without_parameters();

    /*parameter(전달 값)가 있는 함수*/
    function_with_parameters(35, 27, 12);

    /*parameter도 받고, return도 있는 function*/
    int retu = apple(5, 2);
    printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가 남아요.\n", 10, 4, apple(10, 4));

    /*calculator function*/
    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);


    return 0;
}

//definition
//return_type function_name(parameters){}
void p(int num) {
    printf("num 은 %d 입니다.\n", num);
}

void function_without_return() {
    printf("반환 값이 없는 함수입니다.\n");
}

int function_with_return() {
    printf("반환 값이 있는 함수입니다.\n");
}

void function_without_parameters() {
    printf("전달 값이 없는 함수입니다.\n");
}

void function_with_parameters(int num1, int num2, int num3) {
    printf("전달 값이 있는 함수이며 전달받은 값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}

int apple(int total, int ate) {
    printf("전달 값과 반환 값이 있는 함수입니다.\n");
    return total - ate;
}

int add(int num1, int num2) {
    return num1 + num2;
}
int sub(int num1, int num2) {
    return num1 - num2;
}
int mul(int num1, int num2) {
    return num1 * num2;
}
int div(int num1, int num2) {
    return num1 / num2;
}