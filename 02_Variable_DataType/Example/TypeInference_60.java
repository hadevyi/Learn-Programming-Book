package B_Variable_DataType.Example;

public class TypeInference_60 {
    public static void main(String[] args) {
        var i = 10; // int i = 10으로 컴파일됨
        var j = 10.0; // double j = 10.0으로 컴파일됨
        var str = "hello"; // String str = "hello"로 컴파일됨

        System.out.println(i);
        System.out.println(j);
        System.out.println(str);

        str = "test"; // 다른 문자열은 대입 가능
        // str = 3; // str 변수는 String형으로 먼저 사용되었기 때문에 정수 값을 넣을 수 없음
    }
}
