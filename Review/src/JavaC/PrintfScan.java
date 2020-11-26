package JavaC;

import java.util.Scanner;

public class PrintfScan {

    public static void main(String[] args) {
        int age = 12;
        System.out.printf("%d\n", age);

        age = 13;
        System.out.printf("%d\n", age);

        float f = 46.5f;
        System.out.printf("%.2f\n", f);

        final int YEAR = 2000;
        System.out.printf("%d\n", YEAR);

        int add = 3 + 7;
        System.out.printf("%d\n", add);
        System.out.printf("%d * %d = %d\n", 30, 79, 30 * 79);

        try (Scanner scanner = new Scanner(System.in)) {
            String input;
            System.out.printf("%s\n", "값을 입력하세요 : ");
            input = scanner.next();
            System.out.printf("입력 값 ==> %s\n", input);

            int fir, mid, last;
            System.out.printf("%s\n", "3개의 정수를 입력하세요 : ");
            fir = scanner.nextInt();
            mid = scanner.nextInt();
            last = scanner.nextInt();

            System.out.printf("첫번째 값 : %d\n두번째 값 : %d\n세번째 값 : %d\n", fir, mid, last);

            char c = 'A';
            System.out.printf("%c\n", c);

            String p_name;
            int p_age;
            float p_weight;
            double p_height;
            String p_crime;

            System.out.printf("%s\n", "이름이 뭐예요?");
            p_name = scanner.next();
            System.out.printf("%s\n", "몇살이예요?");
            p_age = scanner.nextInt();
            System.out.printf("%s\n", "몸무게는 몇 KG 이예요?");
            p_weight = scanner.nextFloat();
            System.out.printf("%s\n", "키는 몇 CM 이예요?");
            p_height = scanner.nextFloat();
            System.out.printf("%s\n", "무슨 범죄를 저질렀어요?");
            p_crime = scanner.next();

            System.out.printf("\n\n=== 범죄자 정보 ===\n\n");
            System.out.printf("이름   :   %s\n", p_name);
            System.out.printf("나이   :   %d살\n", p_age);
            System.out.printf("몸무게  :   %.2fKG\n", p_weight);
            System.out.printf("키    :   %.2fCM\n", p_height);
            System.out.printf("범죄   :   %s\n", p_crime);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

}