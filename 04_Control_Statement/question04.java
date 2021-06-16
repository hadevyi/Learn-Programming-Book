package D_Control_Statement;

public class question04 {
    public static void main(String[] args) {
        final int MAX = 4;
        for (int i = 1; i <= MAX; i++) {
            for (int j = 0; j < (MAX + 2) - 2 * (i - 1); j++)
                System.out.print(" ");
            for (int j = 0; j < 2 * i - 1; j++)
                System.out.print("* ");
            System.out.println();
        }
    }
}