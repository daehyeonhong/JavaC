package JavaC;

public class Array {

    public static void main(String[] args) {
        int subway_1 = 30, subway_2 = 40, subway_3 = 50;

        System.out.printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
        System.out.printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
        System.out.printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);

        System.out.println();

        int[] subway_array = new int[3];
        subway_array[0] = 30;
        subway_array[1] = 40;
        subway_array[2] = 50;

        for (int i = 0; i < subway_array.length; i++) {
            System.out.printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
        }

        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("%d\n", arr[i]);
        }

        int[] arr_1 = new int[10];
        arr_1[0] = 1;
        for (int i = 0; i < arr_1.length; i++) {
            System.out.printf("%d\n", arr_1[i]);
        }

        float[] arr_f = new float[5];
        arr_f[0] = 1.0f;
        arr_f[1] = 2.0f;
        arr_f[2] = 3.0f;
        for (int i = 0; i < arr_f.length; i++) {
            System.out.printf("%.2f\n", arr_f[i]);
        }

        char str[] = {'c', 'o', 'd', 'i', 'n', 'g'};
        for (char i : str) {
            System.out.printf("%c", i);
        }
        System.out.printf("%d", str.length);

        char kor[] = {'나', '도', ' ', '코', '딩'};
        for (char i : kor) {
            System.out.printf("%c", i);
        }
        System.out.printf("%d", kor.length);

    }

}