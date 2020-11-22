import java.util.Scanner;

public class Loop {

    public static void main(String[] args) {

        /*System.out.println("for");

        for (int i = 0; i < 10; i++) {
            System.out.printf("Hello World%d\n", i);
        }

        System.out.println("while");

        int i = 0;
        while (i < 10) {
            System.out.printf("Hello World%d\n", i++);
        }

        System.out.println("do while");
        i = 0;
        do {
            System.out.printf("Hello World%d\n", i++);
        } while (i < 10);

        System.out.println("duplication loop");
        for (i = 0; i < 3; i++) {
            System.out.printf("첫 번째 반복문 ==> %d\n", i++);
            for (int j = 0; j < 5; j++) {
                System.out.printf(" 두 번째 반복문 ==> %d\n", j);
            }
        }

        System.out.println("multiplication table");
        for (i = 2; i < 10; i++) {
            System.out.printf("%d단 계산\n", i);
            for (int j = 1; j < 10; j++) {
                System.out.printf(" %d * %d = %d\n", i, j, i * j);
            }
        }

        try (Scanner scanner = new Scanner(System.in)) {
            int input;
            System.out.println("숫자를 입력하세요.");
            input = scanner.nextInt();

            for (i = 0; i < input; i++) {
                for (int j = 0; j < i + 1; j++) {
                    System.out.print("o");
                }
                System.out.println();
            }

            for (i = 0; i < input; i++) {
                for (int j = i; j < input - 1; j++) {
                    System.out.print(" ");
                }
                for (int k = 0; k <= i; k++) {
                    System.out.print("o");
                }
                System.out.println();
            }
        }*/

        int floor;
        System.out.print("몇 층으로 쌓겠습니까? |-> ");
        try (Scanner scanner = new Scanner(System.in)) {
            floor = scanner.nextInt();

            for (int i = 0; i < floor; i++) {
                for (int j = i; j < floor - 1; j++) {
                    System.out.print(" ");
                }

                for (int k = 0; k < i * 2 + 1; k++) {
                    System.out.print("o");
                }

                System.out.println();

            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

}