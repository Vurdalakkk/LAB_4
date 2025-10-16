[dz_lab_4.drawio](https://github.com/user-attachments/files/22952815/dz_lab_4.drawio)# Домашнее задание к работе 4
<center>Этот текст будет по центру</center>
<center> ## Условие задачи </center>
<center> Банк отправляет клиенту секретный код для подтверждения операции. Код будет сгенерирован, если только одна из сумм (A или B) в последних двух операциях была четной. Запишите условие генерации кода.; </center>

<center> ## 1. Алгоритм и блок-схема </center>

<center> ### Алгоритм </center>
<center> 1. **Начало** </center>
<center> 2. Объявить переменные </center>
<center>    - 'sum1' </center>
<center>    - 'sum2' </center>
<center> 3. Проверка четности двух сумм </center>
<center>    - 'int result' = (sum1 + sum2) % 2; </center>
<center> 4. Вывод результата проверки четности с подстановкой в текст. </center>
<center> 5. **Конец** </center>

<center> ### Блок-схема </center>

<center> <img width="213" height="563" alt="dz_4" src="https://github.com/user-attachments/assets/82149c92-00ce-4140-a9e7-f4c98b9e2fd3" /> </center>



<center> ## 2. Реализация программы </center>

<center> ``` </center>
<center> #include <stdio.h> </center>
<center> #include <locale.h> </center>

<center> int main() { </center>
<center> 	setlocale(LC_CTYPE, "RUS"); </center>
<center> 	int sum1; </center>
<center>	int sum2; </center>

<center>	printf("Введие суммы двух последних операций: "); </center>
<center>	scanf("%d %d", &sum1, &sum2); </center>

<center>	int result = (sum1 + sum2) % 2;
<center>	printf(" 1 - ваш секретный код будет сгенерирован \n 0 - ваш секретный код не будет сгенерирован \n Ваш результат: %d", result);
<center>	return 0;
<center>}
<center>```


<center> ## 3. Результаты работы программы

<center> <img width="400" height="86" alt="изображение" src="https://github.com/user-attachments/assets/e36bbaa1-2804-4efd-8ed6-a48fe2b3988b" />




<center> ## 4. Информация о разработчике

<center> Выполнил Гребенников Артем, бИПТ-252
