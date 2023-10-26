//Shift
#include <iostream>
using namespace std;
#define tab "\t"
//#define LEFT
#define RIGHT

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


#ifdef LEFT

	//����������� ����� ������� �����


	int number_of_shifts;
	cout << "������� ���������� ������� �����: " << endl; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}

#endif //LEFT(CLASSWORK)
#ifdef RIGHT	
	int number_of_shifts; //������� ���������� ������� ����� ������� ���������� �������
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts; //������ ���-�� � ����������
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}


#endif //RIGHT(HOMEWORK)
	//����� ���������� ������� �� �����
	for (int i = 0; i < n; i++) 
	{
		std::cout << arr[i] << tab;
	}
	std::cout << endl;
}