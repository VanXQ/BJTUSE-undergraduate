import java.util.Scanner;

public class ThreadDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个正整数，非法输入将退出程序：");
        for (int i = 1; ; i++) {
            int a = sc.nextInt();
            if (a > 0) {
                AllPrimeNumber primeNumber = new AllPrimeNumber("Thread " + i, a);
                primeNumber.start();
            } else {
                System.out.println("非法输入，程序终止");
                return;
            }
        }
    }
}
