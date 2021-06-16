package C_Various_Operators.one_min_review;

public class Short_Circuit_79 {
    public static void main(String[] args) {
        int num = 5;
        int i = 10;

        boolean value = ((num = num * 10) > 45) || ((i = i - 5) < 10);
        System.out.println(value); // true
        System.out.println(num); // 50
        System.out.println(i); // 10, Bez, || 연산자에서 앞의 항이 참이면 뒤를 확인하지 않는다.
    }
}