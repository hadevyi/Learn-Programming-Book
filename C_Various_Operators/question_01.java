package C_Various_Operators;

public class question_01 {
    public static void main(String[] args) {
        int myAge = 23; // myAge 변수에 값 23을 대입할 때 사용하는 연산자
        int teacherAge = 38;

        boolean value = (myAge > 25);
        System.out.println(value);

        System.out.println(myAge <= 25);
        System.out.println(myAge == teacherAge); // myAge 변수 값과 teacherAge 변수 값이 같은지 비교하는 연산자.

        char ch;
        ch = (myAge > teacherAge) ? 'T' : 'F'; // 조건식이 참인 경우와 거짓인 경우 다른 결과 값을 출력하는 연산자

        System.out.println(ch);
    }
}
