//Shift
#include <iostream>
using namespace std;
#define tab "\t"

/*
---------------------------------------------------------------
��������� ����������� ����� ������� �� �������� ����� ���������
1 2 3 4 5 6 7 8 9 0
2 3 4 5 6 7 8 9 0 1
3 4 5 6 7 8 9 0 1 2
4 5 6 7 8 9 0 1 2 3
5 6 7 8 9 0 1 2 3 4
6 7 8 9 0 1 2 3 4 5
7 8 9 0 1 2 3 4 5 6
8 9 0 1 2 3 4 5 6 7
9 0 1 2 3 4 5 6 7 8
0 1 2 3 4 5 6 7 8 9
---------------------------------------------------------------
*/
void main()
{
	setlocale(LC_ALL, "");



	const int n = 10;   //�������� ���������� ����� ���������� ��������� � �������
	//����� ��������� ������� �� �����
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };   //��������� ������ � ������ �������� � ���������� ������� �������� �������
	int buffer = arr[0];
	for (int i = 0; i < n; i++)  //������ ������� �� ���������� ��������� 
	{
		std::cout << arr[i] << tab;
	}
	std::cout << endl;




	//����������� ����� ������� �����


	int number_of_shift;
	cout << "������� ���������� �������" << endl; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}


	//����������� ����� ������� ������
	int number_of_shift;
	cout << "������� ���������� �������" << endl; cin >> number_of_shift;
	for (int i = 9; i < number_of_shift; i++)
	{
		int buffer = arr[9];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i - 1];
		}
		arr[n + 1] = buffer;
	}




	
	//����� ���������� ������� �� �����
	for (int i = 0; i < n; i++) 
	{
		std::cout << arr[i] << tab;
	}
	std::cout << endl;
}