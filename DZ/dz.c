#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int sum1;
	int sum2;

	printf("������ ����� ���� ��������� ��������: ");
	scanf("%d %d", &sum1, &sum2);


	printf(" 1 - ��� ��������� ��� ����� ������������ \n 0 - ��� ��������� ��� �� ����� ������������ \n ��� ���������: %d", (sum1 + sum2) % 2);
	return 0;
}
