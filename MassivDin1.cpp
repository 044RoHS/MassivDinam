#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	int arrSize;
	int NumberArr;
	std::cout << "Введите элемент массива: ";
	std::cin >> arrSize;
	int* arr = new int[arrSize];
	for (int ArrElement = 0; ArrElement < arrSize; ArrElement++)
	{
		std::cout << "arr [" << ArrElement << "] = ";
		std::cin >> NumberArr;
		std::cout << std::endl;
		arr[ArrElement] = NumberArr;
	}
	std::cout << "Введённый массив: ";
	for (int ArrrElement = 0;ArrrElement < arrSize; ArrrElement++) 
	{
		std::cout << arr[ArrrElement]<<' ';
	}
	delete[] arr;
}

