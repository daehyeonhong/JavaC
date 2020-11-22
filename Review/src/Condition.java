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

    }

}