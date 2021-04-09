package D_Control_Statement;

public class question02 {
    public static void main(String[] args) {
        int num = 1, step = 1;

        // for-if 문
        for (num = 1; num <= 9; num++) {
            if (num % 2 != 0)
                continue;

            for (step = 1; step <= 9; step++) {
                System.out.println(num + "*" + step + "=" + (num * step));
            }
            System.out.println();
        }

        // for 문
        for (num = 2; num <= 9; num += 2) {
            for (step = 1; step <= 9; step++) {
                System.out.println(num + "*" + step + "=" + (num * step));
            }
            System.out.println();
        }
    }
}
