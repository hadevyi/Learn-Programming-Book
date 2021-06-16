package E_Class_Object;

public class question4_Test {
    public static void main(String[] args) {
        question4 data1 = new question4(30, 2, 2000);
        System.out.println(data1.isValid());

        question4 data2 = new question4(2, 10, 2006);
        System.out.println(data2.isValid());
    }
}
