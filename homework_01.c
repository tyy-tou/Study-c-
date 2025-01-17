
#include <stdio.h>
#include <stdbool.h>

// ��������
bool isprime(int n);

int main() {
    int n;
    // �Ӽ��̶�ȡһ������
    scanf("%d", &n);
    // ���ú����ж��Ƿ�Ϊ��������������
    if (isprime(n)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}

// ��������
bool isprime(int n) {
    // �����������0��1��������
    if (n <= 1) {
        return false;
    }
    // ���2��n��ƽ����֮���������
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

