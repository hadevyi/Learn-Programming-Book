package D_Control_Statement.Coding_Alone;

public class grade_100 {
    public static void main(String[] args) {
        int score = 66;
        char grade;

        if (100 <= score && 90 >= score) {
            grade = 'A';
        } else if (80 >= score) {
            grade = 'B';
        } else if (70 >= score) {
            grade = 'C';
        } else if (60 >= score) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        System.out.println(score + "점의 학점은 " + grade + "입니다.");
    }
}
