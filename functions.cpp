#include <iostream>
#include <cstdlib>
//функции

float Sum(float num1, float num2)
{
	return num1 + num2;
}
float Subtraction(float num1, float num2)
{
	return num1 - num2;
}
float Multiply(float num1, float num2)
{
	return num1 * num2;
}
float Division(float num1, float num2)
{
	if (num2 == 0)
	{
		return 1;
	}
	return num1 / num2;
}
float Percent(float num1, float num2)
{
	return num1 * num2 / 100;
}



void SetArray(int arr[], int size);
void PrintArray(int arr[], int size);


void NewArray(int arr[], int size);
void PrintNewArray(int arr[], int size);

void max(int  arr[], int size, int max, int maxIndex);
void min(int  arr[], int size, int min, int minIndex);


using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int size = 20;
	int arr[size];
	int max1 = INT_MIN, min1 = INT_MAX;
	int minIndex{}, maxIndex{};

	cout << "Сумма = " << Sum(11, 9)<<endl;
	cout << "Разность = " << Subtraction(11, 9)<<endl;
	cout << "Произведение = " << Multiply(11, 9) << endl;
	cout << " Частное = " << Division(11, 9) << endl;
	cout << "Процент числа = " << Percent(11, 9) << endl;

	SetArray(arr, size);
	PrintArray(arr, size);


	NewArray(arr, size);
	PrintNewArray(arr, size);
	max(arr, size, max1, maxIndex);
	min(arr, size, min1, minIndex);
}


void NewArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 27 - 8;
	}
}

void PrintNewArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void max(int arr[], int size, int max1, int maxIndex)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max1)
		{
			max1 = arr[i];
			maxIndex = i;
		}
	}
	cout << "\n\nМаксимальное число под номером "<<maxIndex<<" = " << max1;
}

void min(int arr[], int size, int min1, int minIndex)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min1)
		{
			min1 = arr[i];
			minIndex = i;
		}
	}
	cout << "\nМинимальное число под номером " << minIndex << " = " << min1;
}




void SetArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i]<<" ";
	}
}