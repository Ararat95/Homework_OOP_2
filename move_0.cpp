#include <iostream>

void move_zero (int*&, const int);

int main ()
{
    const int size = 50;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        if (i % 2 == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    
    move_zero(arr,size);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << '|';
    }
    delete[] arr;
    return 0;
}
void move_zero (int*& arr, const int size)
{
    for (int i = 0, j = size - 1; i <= j; ++i)
    {
        if (arr[j] == 0)
        {
            --j;
        }
        if (arr[i] == 0)
        {
            std::swap(arr[i],arr[j--]);
        }
    }
}