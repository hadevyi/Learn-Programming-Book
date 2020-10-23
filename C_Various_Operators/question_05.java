package C_Various_Operators;

public class question_05 {
    public static void main(String[] args) {
        int num1 = 2; // 0000 0010
        int num2 = 10; // 0000 1010

        System.out.println(num1 & num2); // 0000 0010 (2)
        System.out.println(num1 | num2); // 0000 1010 (10)
        System.out.println(num1 ^ num2); // 0000 1000 (8)
        System.out.println(~num1); // 1111 1101
    }
}
