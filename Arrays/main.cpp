//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = {239,11,12,13,14}; //������ �������� ���������� � ������� � �����������
	for (int j = 0; j < SIZE; j++) //������� ������� j = 0; � ������ ������� 
	{
		cout << arr[j] << "\t";//���� ������� �������� ������� � ������� �����������
	}
	cout << endl;
	for (int i = SIZE -1; i >= 0; i--) //������� �������� ������� i = size - 1; �� ���� 4 � ������� �� ������� � ��������
	{
		cout << arr[i] << "\t";//���� ������� �������� ������� � ������� ��������
	}
	cout << endl;
	int sum = 0; //������� ���������� ��� �������� �������� ����� ��������� � �����
	for (int i = 0; i < SIZE; i++)//������� ������� i � �������� � ������� �����������
	{
		sum += arr[i];//� ���� ����� for ���������� ��� �������� ������� sum = sum + arr[i];
	}
	cout << "����� ��������� ������� SIZE" << "\t" << sum << endl;
	cout << "������� �������������� �������� ��������� ������� SIZE"<< " \t" << (double)sum/SIZE << endl;//����� �������������� ���� int � double
	//� �������������� int �� double, ����� ������� ���������� �������� � ��������
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i]; //���� �����-�� ������� ������ min. ��� ����������� �����
		if (arr[i] > max)max = arr[i]; //���� �����-�� ������� ������ max. ��� ������������ �����
	}
	cout << "����������� �������� � ������� " << "\t" << min << endl;
	cout << "������������ �������� � ������� " << "\t" << max << endl;
}