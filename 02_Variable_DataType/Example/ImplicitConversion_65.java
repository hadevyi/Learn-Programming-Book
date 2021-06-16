package B_Variable_DataType.Example;

public class ImplicitConversion_65 {
    public static void main(String[] args) {
        byte bNum = 10;
        int iNum = bNum; // byte형 값이 int형 변수로 대입됨

        System.out.println(bNum);
        System.out.println(iNum);

        int iNum2 = 20;
        float fNum = iNum2; // int형 값이 float형 변수로 대입됨

        System.out.println(iNum);
        System.out.println(fNum);

        double dNum;
        dNum = fNum + iNum;
        System.out.println(dNum);
    }
}
