
#include <stdio.h>
#include <stdbool.h>

// 函数声明
bool isprime(int n);

int main() {
    int n;
    // 从键盘读取一个整数
    scanf("%d", &n);
    // 调用函数判断是否为素数，并输出结果
    if (isprime(n)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}

// 函数定义
bool isprime(int n) {
    // 特殊情况处理：0和1不是素数
    if (n <= 1) {
        return false;
    }
    // 检查2到n的平方根之间的所有数
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

