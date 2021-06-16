package B_Variable_DataType.Example;

public class Constant_61 {
    public static void main(String[] args) {
        final int MAX_NUM = 100; // 선언과 동시에 초기화
        final int MIN_NUM;

        MIN_NUM = 0; // 사용하기 전에 초기화. 초기화하지 안으면 오류 발생

        System.out.println(MAX_NUM);
        System.out.println(MIN_NUM);

        // MAX_NUM = 1000; // 오류 발생. 상수는 값을 변경할 수 없음
    }
}
