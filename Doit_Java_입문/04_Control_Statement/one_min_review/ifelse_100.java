package D_Control_Statement.one_min_review;

public class ifelse_100 {
    public static void main(String[] args) {
        int score = 55;
        char grade;

        if (score >= 90) {
            grade = 'A';
        } else {
            grade = 'B';
        }

        // 조건 연산자 형태 변환
        grade = (score >= 90) ? 'A' : 'B';
    }
}
