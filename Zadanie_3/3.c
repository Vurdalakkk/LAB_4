#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int num;
	int last_num;
	int second_num;
	int first_num;
	int sum_num;
	int reverse;

	printf("������� ����� ����������� �����: ");
	scanf("%d", &num);
	getchar();

	first_num = num / 100;
	second_num = num / 10 - first_num * 10;
	last_num = num - first_num * 100 - second_num * 10;
	sum_num = first_num + second_num + last_num;
	reverse = last_num * 100 + second_num * 10 + first_num;
	printf(" 1 ����� �����: %d \n 2 ����� �����: %d \n 3 ����� �����: %d \n ����� ���� ������� �����: %d \n ����� ��������: %d", first_num, second_num, last_num, sum_num, reverse);
}