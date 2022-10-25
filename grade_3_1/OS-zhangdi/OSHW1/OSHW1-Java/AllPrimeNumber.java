class AllPrimeNumber implements Runnable {
    private Thread t;
    private String threadName;

    private int number;

    AllPrimeNumber(String name, int number) {
        threadName = name;
        this.number = number;
        System.out.println("创建线程" + threadName);
    }

    @Override
    public void run() {
        System.out.println("运行线程" + threadName);
        System.out.println(number+"以内的素数有：");
        try {
            for (int i = 2; i <= number; i++) {
                boolean isPrime = true;
                for (int j = 2; j < i; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime) {
                    System.out.print(i + " ");
                }
            }
            Thread.sleep(0);
            System.out.println("""

                    ---------------------------------------------------------------------------------------
                    请输入一个正整数，非法输入将退出程序：""");
        } catch (InterruptedException e) {
            System.out.println("线程" + threadName + "冲突");
        }
    }

    public void start() {
        System.out.println("开始线程" + threadName);
        if (t == null) {
            t = new Thread(this, threadName);
            t.start();
        }
    }
}
