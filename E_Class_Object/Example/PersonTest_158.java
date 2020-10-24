package E_Class_Object.Example;

public class PersonTest_158 {
    public static void main(String[] args) {
        Person_157 personKim = new Person_157();
        personKim.name = "김유신";
        personKim.weight = 85.5F;
        personKim.height = 180.0F;
        // 디폴트 생성자로 클래스를 생선한 후 인스턴스 변수 값을 따로 초기화

        Person_157 personLee = new Person_157("이순신", 175, 75);
        // 인스턴스 변수 초기화와 동시에 클래스 생성
    }
}
