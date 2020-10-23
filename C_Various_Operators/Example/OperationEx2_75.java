package C_Various_Operators.Example;

public class OperationEx2_75 {
    public static void main(String[] args) {
        int gameScore = 150; // 게임에서 획득한 점수는 150점

        int lastScore1 = ++gameScore; // gameScore에 1만큼 더한 값을 lastScore1에 대입
        System.out.println(lastScore1); // 151

        int lastScore2 = --gameScore; // gamgeScore에 1만큼 뺀 값을 lastScore2에 대입
        System.out.println(lastScore2); // 150
    }
}
