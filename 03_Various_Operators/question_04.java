package C_Various_Operators;

public class question_04 {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 20;
        boolean result;

        result = ((num1 > 10) && (num2 > 10));
        System.out.println(result); // False
        result = ((num1 > 10) || (num2 > 10));
        System.out.println(result); // True
        System.out.println(!result); // False
    }
}
