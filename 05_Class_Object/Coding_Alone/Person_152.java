package E_Class_Object.Coding_Alone;

public class Person_152 {
    int age;
    String name;
    boolean married;
    int numChildren;

    public static void main(String[] args) {
        Person_152 james = new Person_152();

        james.age = 40;
        james.name = "James";
        james.married = true;
        james.numChildren = 3;

        System.out.print("나이가 " + james.age + "인 " + james.name + "은 ");

        if (james.married == true)
            System.out.println("결혼을 했으며, 자녀는 " + james.numChildren + "명입니다.");
        else
            System.out.println("결혼하지 않았습니다.");
    }
}
