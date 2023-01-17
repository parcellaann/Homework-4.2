// Homework 3.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#
#include <iostream>

int main()
{
	std::cout << "Enter the array elements:\n";
	int arr1[7];
	for (int i = 0; i < 7; i++)
		std::cin >> arr1[i];
	for (int i = 0; i < 7; i++)
	{
		std::cout << arr1[i] << " ";
	}

	std::cout << "\n\nTask 2.\nEnter the number of array elements:\n";
	int count = 0;
	std::cin >> count;
	std::cout << "Enter the array elements:\n";
	int *arr = new int[count];
	for (int i = 0; i < count; i++)
		std::cin >> arr[i];
	for (int i = 0; i < count; i++)
	{
		std::cout << arr[i] << " ";
	}
}