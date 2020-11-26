package JavaC;

import java.util.Scanner;

public class ArrayProject {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("\n\n == 아빠는 대머리 게임 == \n\n");
        int answer, treatment = (int) (Math.random() * 4) + 1, cntShowBottle, prevCntShowBottle = 0;

        for (int i = 1; i <= 3; i++) {
            int[] bottle = new int[4];
            bottle[0] = 4;
            do {
                cntShowBottle = (int) (Math.random() * 2 + 2);
            } while (cntShowBottle == prevCntShowBottle);

            int isIncluded = 0;
            System.out.printf(" > %d번째 시도 : \n <", i);

            for (int j = 0; j < cntShowBottle; j++) {
                int randBottle = (int) (Math.random() * 4) + 1;
                if (bottle[randBottle] == 0) {
                    bottle[randBottle] = 1;
                    if (randBottle == treatment) {
                        isIncluded = 1;
                    }
                } else {
                    j--;
                }
            }

            for (int k = 0; k < 4; k++) {
                if (bottle[k] == 1) {
                    System.out.printf("%d", k + 1);
                }
                System.out.println("물약을 바릅니다\n");

                if (isIncluded == 1) {
                    System.out.println(">> 성공! 머리가 났어요! <<\n");
                } else {
                    System.out.println(">> 실패! 머리가 나지 않았어요! <<\n");
                }
                System.out.println(">> 계속하려면 아무 키나 누르세요... <<\n");
                scanner.next();
            }

            System.out.println("발모제는 몇 번 일까요?");
            answer = scanner.nextInt();

            if (answer == treatment + 1) {
                System.out.println(">> 정답입니다! <<");
            } else {
                System.out.printf(">> 땡! 정답은 %d 입니다! <<", treatment + 1);
            }

        }

    }

}