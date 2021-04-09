package D_Control_Statement.one_min_review;

public class multiplication_of_three_120 {
    public static void main(String[] args) {
        int num = 0;

        for (num = 1; num <= 100; num++) {
            if (num % 3 != 0) {
                continue;
            }
            System.out.println(num);
        }
    }
}