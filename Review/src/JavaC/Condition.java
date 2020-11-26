package JavaC;

import java.util.Random;
import java.util.Scanner;

public class Condition {

    public static void main(String[] args) {

        int age = 7;

        if (age >= 20) {
            System.out.println("일반인입니다.");
        } else {
            System.out.println("학생입니다.");
        }

        System.out.println(age < 8 ? "어린이입니다." : age >= 8 && age <= 13 ? "초등학생입니다." : age >= 14 && age <= 16 ? "중학생입니다." : age >= 17 && age <= 19 ? "고등학생입니다." : "일반인입니다.");

        for (int i = 1; i <= 30; i++) {
            if (i >= 6) {
                System.out.println("나머지 학생은 집에 가세요!");
                break;
            }
            System.out.printf("%d번 학생은 조별 발표 준비를 하세요!\n", i);
        }

        for (int i = 1; i < 30; i++) {
            if (i >= 6 && i <= 10) {
                System.out.printf("%d번 학생은 결석입니다.\n", i);
                continue;
            }
            System.out.printf("%d번 학생은 조별 발표 준비를 하세요!\n", i);
        }

        int a = 10, b = 11, c = 12;
        if (a == b || c == b) {
            System.out.println("a와 b, 혹은 c와 d의 값이 같습니다.");
        } else {
            System.out.println("값이 서로 다르네요");
        }

        int i = (int) (Math.random() * 3);

        System.out.printf(i == 0 ? "가위" : i == 1 ? "바위" : i == 2 ? "보" : "몰라요");

        switch (i) {
            case 0:
                System.out.println("가위");
                break;
            case 1:
                System.out.println("바위");
                break;
            case 2:
                System.out.println("보");
                break;
            default:
                System.out.println("몰라요");
                break;
        }

        int p_age = 21;

        switch (p_age) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                System.out.println("어린이 입니다.");
                break;
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
                System.out.println("초등학생입니다");
                break;
            case 14:
            case 15:
            case 16:
                System.out.println("중학생입니다.");
                break;
            case 17:
            case 18:
            case 19:
                System.out.println("고등학생입니다.");
            default:
                System.out.println("학생이 아닌가 봐요");
                break;
        }

        try (Scanner scanner = new Scanner(System.in)) {
            int num = (int) (Math.random() * 100 + 1);
            System.out.printf("숫자 ==> %d", num);
            int answer = 0;
            int chance = 5;
            while (chance > 0) {
                System.out.printf("남은 기회 %d번\n", chance--);
                System.out.println("숫자를 맞혀보세요 (1~100) : ");
                answer = scanner.nextInt();

                if (answer > num) {
                    System.out.println("DOWN ↡\n");
                } else if (answer < num) {
                    System.out.println("UP ↟\n");
                } else if (answer == num) {
                    System.out.println("정답입니다!\n");
                    break;
                } else {
                    System.out.println("알 수 없는 오류가 발생했어요.");
                }

                if (chance == 0) {
                    System.out.println("모든 기회ㅐ를 소진하였습니다.\n");
                }

            }
        } catch (Exception e) {
            e.printStackTrace();
        }

    }

}