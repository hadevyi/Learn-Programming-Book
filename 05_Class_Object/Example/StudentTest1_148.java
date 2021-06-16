package E_Class_Object.Example;

public class StudentTest1_148 {
    public static void main(String[] args) {
        Student_144 student1 = new Student_144(); // 첫 번째 학생 생성
        student1.studentName = "안연수";
        System.out.println(student1.getStudentName());

        Student_144 student2 = new Student_144(); // 두 번째 학생 생성
        student2.studentName = "안승연";
        System.out.println(student2.getStudentName());
    }
}