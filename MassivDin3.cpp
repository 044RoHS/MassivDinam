#include <iostream>

int** create_two_dim_array(int row , int column) 
{
	int** arr = new int* [row];
	for (int i = 0 ;i < row  ; i++  ) 
	{
		arr[i] = new int[column];
	}
	return arr;
}
void fill_two_dim_array(int** arr , int row , int column ) 
{
	for (int x = 0 ; x < row; x++) 
	{
		for (int y = 0 ; y < column; y++) 
		{
			 arr[x][y] = (x + 1) * (y + 1) ;

		}
	}
}
void print_two_dim_array(int** arr,int row ,int column) 
{
	for (int x = 0 ; x < row; x++) 
	{
		for (int y  = 0; y < column; ++y) 
		{
			std::cout << arr[x][y] << ' ';
		}
		std::cout << std::endl;
	}

}
void delete_two_dim_array(int** arr , int row , int column) 
{
	for (int x = 0 ; x < row; x++) 
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


