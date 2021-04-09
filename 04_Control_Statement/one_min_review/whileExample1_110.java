package D_Control_Statement.one_min_review;

public class whileExample1_110 {
    public static void main(String[] args) {
        int num = 1;
        int sum = 0;

        while (num <= 50) {
            sum += num;
            num++;
        }

        System.out.println("1부터 50까지 합은 " + sum + "입니다.");
    }
}
