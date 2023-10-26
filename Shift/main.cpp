//Shift
#include <iostream>
using namespace std;
#define tab "\t"

/*
---------------------------------------------------------------
Выполнить циклический сдвиг массива на заданное число элементов
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



	const int n = 10;   //Объявлем переменную задав количество элементов в массиве
	//Вывод исходного массива на экран
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };   //Объявляем массив и задаем значение с клавиатуры каждому элементу массива
	int buffer = arr[0];
	for (int i = 0; i < n; i++)  //Задаем счетчик от количества элементов 
	{
		std::cout << arr[i] << tab;
	}
	std::cout << endl;




	//Циклический сдвиг массива влево


	int number_of_shift;
	cout << "Введите количество сдвигов" << endl; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}


	//Циклический сдвиг массива вправо
	int number_of_shift;
	cout << "Введите количество сдвигов" << endl; cin >> number_of_shift;
	for (int i = 9; i < number_of_shift; i++)
	{
		int buffer = arr[9];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i - 1];
		}
		arr[n + 1] = buffer;
	}




	
	//Вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++) 
	{
		std::cout << arr[i] << tab;
	}
	std::cout << endl;
}