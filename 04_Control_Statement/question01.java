package D_Control_Statement;

public class question01 {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 2;
        char operator = '+';

        // if - else 문
        if (operator == '+')
            System.out.println(num1 + "+" + num2 + "=" + (num1 + num2));
        else if (operator == '-')
            System.out.println(num1 + "-" + num2 + "=" + (num1 - num2));
        else if (operator == '*')
            System.out.println(num1 + "*" + num2 + "=" + (num1 * num2));
        else if (operator == '/')
            System.out.println(num1 + "/" + num2 + "=" + (num1 / num2));
        else
            System.out.println("제공하지 않는 연산자입니다.");

        // switch - case 문
        switch (operator) {
            case '+':
                System.out.println(num1 + "+" + num2 + "=" + (num1 + num2));
                break;
            case '-':
                System.out.println(num1 + "-" + num2 + "=" + (num1 - num2));
                break;
            case '*':
                System.out.println(num1 + "*" + num2 + "=" + (num1 * num2));
                break;
            case '/':
                System.out.println(num1 + "/" + num2 + "=" + (num1 / num2));
                break;
            default:
                System.out.println("제공하지 않는 연산자입니다.");
                break;
        }
    }
}
