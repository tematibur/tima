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

	// �������� ���������� ��� �������� ����� � ������������ 
	int sumValue = 0; // �����
	

	cout << endl << "������ = ";
	// �������� �� ���� ��������� ������� 
	for (int i = 0; i < x; ++i) {
		// ������� ������� ������� � ����������
		int currentElementValue = mass[i];

		// ����� ������� ���
		cout << currentElementValue << " ";

		// ������������� ����� ��������� ������� � ������� ���������
		sumValue = sumValue + currentElementValue;

		
		
	}

	cout << endl << "����� ��������� ������� = " << sumValue;

	


	return 0;
}