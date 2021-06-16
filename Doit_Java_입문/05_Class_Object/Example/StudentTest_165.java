package E_Class_Object.Example;

public class StudentTest_165 {
    public static void main(String[] args) {
        Student_164 studentLee = new Student_164();
        // studentLee.studentName = "이상원"; // pravite 변수
        studentLee.setStudentName("이상원");
        // setStudentName() 메서드를 활용해 private 변수에 접근 가능

        System.out.println(studentLee.getStudentName());
    }
}
