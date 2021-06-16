package E_Class_Object.Coding_Alone;

public class User_152 {
    String orderNumber;
    String orderID;
    int orderYear;
    int orderMonth;
    int orderDay;
    String orderName;
    String orderProductNumber;
    String orderAddress;

    public static void main(String[] args) {
        User_152 user = new User_152();

        user.orderNumber = "201803120001";
        user.orderID = "abc123";
        user.orderYear = 2018;
        user.orderMonth = 3;
        user.orderDay = 12;
        user.orderName = "홍길순";
        user.orderProductNumber = "PD0345-12";
        user.orderAddress = "서울시 영등포구 여의도동 20번지";

        System.out.println("주문 번호 : " + user.orderNumber);
        System.out.println("주문자 아이디 : " + user.orderID);
        System.out.println("주문 날짜 : " + user.orderYear + "년 " + user.orderMonth + "월 " + user.orderDay + "일");
        System.out.println("주문자 이름 : " + user.orderName);
        System.out.println("주문 상품 번호 : " + user.orderProductNumber);
        System.out.println("배송 주소 : " + user.orderAddress);
    }
}
