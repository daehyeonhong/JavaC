import java.util.Scanner;

public class function_project {

    public static void main(String[] args) {
        int count = 0;
        for (int i = 1; i <= 5; i++) {
            int num1 = getRandomNumber(i);
            int num2 = getRandomNumber(i);
            showQuestion(i, num1, num2);

            int answer = -1;
            try (Scanner scanner = new Scanner(System.in)) {
                answer = scanner.nextInt();
                if (answer == -1) {
                    System.out.println("프로그램을 종료합니다.\n");
                    System.exit(0);
                } else if (answer == num1 * num2) {
                    success();
                    count++;
                } else {
                    failure();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        System.out.printf("당신은 5개의 비밀번호 중 %d개를 맞춨습니다!\n", count);

    }

    static int getRandomNumber(int level) {
        return (int) (Math.random() % (level * 7) + 1);
    }

    static void showQuestion(int level, int num1, int num2) {
        System.out.printf("\n\n\n######### %d번째 비밀번호 #########\n\n\n", level);
        System.out.printf("\n\t%d * %d는\n\n", num1, num2);
        System.out.println("#####################");
        System.out.println("\n비밀번호를 입력하세요 ==> (종료 : -1)");
    }

    static void success() {
        System.out.println("\n>> Good! 정답입니다!!<<");
    }

    static void failure() {
        System.out.println("\n>> Beep! 오답입니다!! <<");
    }

}

