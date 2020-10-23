package D_Control_Statement.one_min_review;

public class sum500_122 {
    public static void main(String[] args) {
        int sum = 0;
        int num;

        for (num = 1;; num++) {
            sum += num;
            if (sum >= 500)
                break;
        }

        System.out.println(sum);
        System.out.println(num);
    }
}
