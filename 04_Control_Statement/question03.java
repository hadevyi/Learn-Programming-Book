package D_Control_Statement;

public class question03 {
    public static void main(String[] args) {
        int i, step;

        for (i = 1; i <= 9; i++) {
            for (step = 1; step <= 9; step++) {
                if (step > i)
                    break;
                System.out.println(i + "*" + step + "=" + (i * step));
            }
            System.out.println();
        }
    }
}
