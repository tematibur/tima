#include <windows.h> 
#include<stdio.h> 
#include<algorithm> 
#include<math.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x = 6;
	int mass[] = {0, 0, 1, 1, 2, 2};

	// Создадим переменные для хранения суммы и произведения 
	int sumValue = 0; // Сумма
	

	cout << endl << "Массив = ";
	// Проходим по всем элементам массива 
	for (int i = 0; i < x; ++i) {
		// Вынесем текущий элемент в переменную
		int currentElementValue = mass[i];

		// Сразу выведем его
		cout << currentElementValue << " ";

		// Пересчитываем сумму элементов массива с текущим значением
		sumValue = sumValue + currentElementValue;

		
		
	}

	cout << endl << "Сумма элементов массива = " << sumValue;

	


	return 0;
}