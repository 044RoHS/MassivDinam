#include <iostream>

int** create_two_dim_array(int row , int column) 
{
	int** arr = new int* [row];
	for (int i = 1 ;i < row +1 ; i++  ) 
	{
		arr[i] = new int[column];
	}
	return arr;
}
void fill_two_dim_array(int** arr , int row , int column ) 
{
	for (int x = 1 ; x < row+1; x++) 
	{
		for (int y = 1 ; y < column+1; ++y) 
		{
			arr[x][y] = x * y;
		}
	}
}
void print_two_dim_array(int** arr,int row ,int column) 
{
	for (int x = 1 ; x < row+1; x++) 
	{
		for (int y  = 1; y < column+1; ++y) 
		{
			std::cout << arr[x][y] << ' ';
		}
		std::cout << std::endl;
	}

}
void delete_two_dim_array(int** arr , int row , int column) 
{
	for (int x = 1 ; x < row+1; x++) 
	{
	
		delete[] arr[x];

	}
	delete[] arr;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	int stroka, stolb;
	std::cout << "Введите колчество строк: ";
	std::cin >> stroka;
	std::cout << "Введите количество столбцов: ";
	std::cin >> stolb;
	int** Arr = create_two_dim_array(stroka,stolb);
	fill_two_dim_array(Arr, stroka, stolb);
	print_two_dim_array(Arr, stroka, stolb);
	delete_two_dim_array(Arr, stroka, stolb);



}


