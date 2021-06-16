package E_Class_Object.Example;

public class StudentTest_163 {
    public static void main(String[] args) {
        Student_162 studentLee = new Student_162();
        // studentLee.studentName = "이상원"; // 오류 발생 : private

        System.out.println(studentLee.getStudentName());
    }
}
