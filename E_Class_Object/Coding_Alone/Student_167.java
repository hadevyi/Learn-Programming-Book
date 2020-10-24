package E_Class_Object.Coding_Alone;

public class Student_167 {
    int studentID;
    private String studentName;
    int grade;
    String address;

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public static void main(String[] args) {
        Student_167 studentLee = new Student_167();
        studentLee.setStudentName("A");

        System.out.println(studentLee.getStudentName());
    }

}
