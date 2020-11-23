public class Function {

    public static void main(String[] args) {
        int num = 2;
        System.out.printf("num 은 %d 입니다.\n", num);
        p(num);

        num += 3;
        System.out.printf("num 은 %d 입니다.\n", num);

        num -= 1;
        System.out.printf("num 은 %d 입니다.\n", num);

        num *= 3;
        System.out.printf("num 은 %d 입니다.\n", num);

        num /= 3;
        System.out.printf("num 은 %d 입니다.\n", num);

        function_without_return();
        int ret = function_with_return();
        p(ret);
        function_without_parameters();
        function_with_parameters(35, 27, 12);

        int retu = apple(5, 2);
        System.out.printf("사과 %d개 중에 %d개를 먹으면? %d가 남아요.\n", 10, 4, apple(10, 4));

        num = 2;

        num = add(num, 3);
        p(num);

        num = sub(num, 1);
        p(num);

        num = mul(num, 3);
        p(num);

        num = div(num, 6);
        p(num);

    }

    static void p(int num) {
        System.out.println(num);
    }

    static int apple(int total, int ate) {
        return total - ate;
    }

    static int add(int num1, int num2) {
        return num1 + num2;
    }

    static int sub(int num1, int num2) {
        return num1 - num2;
    }

    static int mul(int num1, int num2) {
        return num1 * num2;
    }

    static int div(int num1, int num2) {
        return num1 / num2;
    }

    static void function_without_return() {
        System.out.println("반환 값이 없는 함수입니다.");
    }

    static int function_with_return() {
        System.out.println("반환 값이 있는 함수입니다.");
        return 1;
    }

    static void function_without_parameters() {
        System.out.println("전달 값이 없는 함수입니다.");
    }

    static void function_with_parameters(int num1, int num2, int num3) {
        System.out.printf("전달 값이 있는 함수입니다.\n%d, %d, %d\n", num1, num2, num3);
    }

}