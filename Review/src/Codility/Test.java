package Codility;

public class Test {
    public static int solution(int N) {
        String binaryStr = Integer.toBinaryString(N);
        char[] bin = binaryStr.toCharArray();
        int gap = 0;
        int result = 0;
        for (char c : bin) {
            if (c == '0') {
                ++gap;
            } else {
                if (gap > result) {
                    result = gap;
                }
                gap = 0;
            }
        }
        return result;
    }
}