#include <iostream>

double* create_array(int SizeArr) 
{
    return new double [SizeArr] {};
}

int main(  )
{
    setlocale(LC_ALL, "Ru");
    int Arrsize;
    std::cout << "Введите размер массива: ";
    std::cin >> Arrsize;
    double* Arr = create_array(Arrsize);
    std::cout << "Массив: " ;
    for (int ASize = 0 ;ASize < Arrsize;ASize++ ) 
    {
        std::cout << Arr[ASize]<< " ";
    }
    delete[] Arr;
}


