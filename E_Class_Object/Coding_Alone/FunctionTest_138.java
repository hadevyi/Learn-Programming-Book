package E_Class_Object.Coding_Alone;

public class FunctionTest_138 {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 20;

        int plus = add(num1, num2);
        int minus = sub(num1, num2);
        int multi = mul(num1, num2);
        double division = div(num1, num2);

        System.out.println(num1 + " + " + num2 + " = " + plus + "입니다.");
        System.out.println(num1 + " - " + num2 + " = " + minus + "입니다.");
        System.out.println(num1 + " * " + num2 + " = " + multi + "입니다.");
        System.out.println(num1 + " / " + num2 + " = " + division + "입니다.");
    }

    public static int add(int num1, int num2) {
        return num1 + num2;
    }

    public static int sub(int num1, int num2) {
        return num1 - num2;
    }

    public static int mul(int num1, int num2) {
        return num1 * num2;
    }

    public static double div(int num1, int num2) {
        return (double) num1 / (double) num2;
    }
}
