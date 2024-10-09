#include <iostream>
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


using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Сумма = " << Sum(11, 9)<<endl;
	cout << "Разность = " << Subtraction(11, 9)<<endl;
	cout << "Произведение = " << Multiply(11, 9) << endl;
	cout << " Частное = " << Division(11, 9) << endl;
	cout << "Процент числа = " << Percent(11, 9) << endl;
}