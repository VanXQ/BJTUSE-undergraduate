#include <iostream>
#include <pthread.h>
#include <unistd.h>

void getPrime(int number) {
    sleep(1);
    int i, j, isPrime;
    for (i = 2; i <= number; i++) {
        isPrime = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 1;
                break;
            }
        }
        if (isPrime == 0) {
            std::cout << i << "  ";
        }
    }
    std::cout << std::endl;
}

int main() {

    for (pthread_t pid = 1;; pid++) {
        int a;
        sleep(2);
        std::cout << "请输入一个正整数，非法输入将导致退出程序: ";
        std::cin >> a;
        if (a > 0) {
            pthread_create(&pid, nullptr, reinterpret_cast<void *(*)(void *)>(getPrime), reinterpret_cast<void *>(a));
            std::cout << "线程-" << pid << "已建立\n" << a << "以内的素数有:  " << std::endl;
        } else {
            printf("非法输入，程序终止");
            return 0;
        }
    }
}
