#include <stdio.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char str1[21], str2[21], str3[21];
    char *p1 = str1, *p2 = str2, *p3 = str3;

    // ��ȡ�����ַ���
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // ȥ��ĩβ�Ļ��з�
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // ȥ��ĩβ�Ļ��з�
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = 0; // ȥ��ĩβ�Ļ��з�

    // ʹ��ָ���strcmp�Ƚ��ַ���������������
    if (strcmp(p1, p2) > 0) swap(&p1, &p2);
    if (strcmp(p1, p3) > 0) swap(&p1, &p3);
    if (strcmp(p2, p3) > 0) swap(&p2, &p3);

    // ����������ַ���
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);

    return 0;
}
