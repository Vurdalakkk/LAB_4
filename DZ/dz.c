#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int sum1;
	int sum2;

	printf("¬ведие суммы двух последних операций: ");
	scanf("%d %d", &sum1, &sum2);


	printf(" 1 - ваш секретный код будет сгенерирован \n 0 - ваш секретный код не будет сгенерирован \n ¬аш результат: %d", (sum1 + sum2) % 2);
	return 0;
}
