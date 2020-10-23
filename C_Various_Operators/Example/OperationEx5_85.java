package C_Various_Operators.Example;

public class OperationEx5_85 {
    public static void main(String[] args) {
        int num = 0B00000101;

        System.out.println(num << 2); // 왼쪽으로 2비트 이동 00010100 (20)
        System.out.println(num >> 2); // 오른쪽으로 2비트 이동 00000001 (1)
        System.out.println(num >>> 2); // 오른쪽으로 2비트 이동 00000001 (1)

        System.out.println(num); // num에 값을 대입하지 않았으므로 비트 이동과 관계없이 기존 값 그대로 출력

        num = num << 2; // 왼쪽 2비트 이동한 값을 다시 num에 대입
        System.out.println(num);
    }
}
