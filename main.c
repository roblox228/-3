#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int p;

    printf("������ ������� �������: ");
    scanf("%d", &p);

    if (p > 30) {
        printf("p ������� ���� ����� ��� ������� 30.\n");
        return 1;
    }

    long long total = pow(2, p);

    long long result = total - (p - 2);

    printf("ʳ������ ����� �� %d �������: %lld\n", p, result);

    return 0;
}
