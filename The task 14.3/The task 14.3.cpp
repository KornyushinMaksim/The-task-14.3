#include <iostream>
using namespace std;

template <typename I>
I* init_array(I* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = 10 - rand() % 30;
    }
    return arr;
}
template <typename I>
void print_array(I* arr, int si) {
    for (size_t i = 0; i < si; i++)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;
}
template <typename I>
void array_minus(I* arr, int si) {
    int index_minus = 0;
    for (size_t i = 0; i < si; i++)
    {
        if (arr[i] < 0) {
            index_minus++;
        }
    }
    I* minus = new I[index_minus];
    for (size_t i = 0; i < si; i++) 
    {
        if (arr[i] < 0){
            minus[i] = arr[i];
            cout << minus[i] << " | ";
        }
    }
    cout << endl;
}
template <typename I>
void array_null(I* arr, int si) {
    int index_null = 0;
    for (size_t i = 0; i < si; i++)
    {
        if (arr[i] == 0) {
            index_null++;
        }
    }
    I* null = new I[index_null];
    for (size_t i = 0; i < si; i++)
    {
        if (arr[i] == 0) {
            null[i] = arr[i];
            cout << null[i] << " | ";
        }
    }
    cout << endl;
}
template <typename I>
void array_plus(I* arr, int si) {
    int index_plus = 0;
    for (size_t i = 0; i < si; i++)
    {
        if (arr[i] < 0) {
            index_plus++;
        }
    }
    I* plus = new I[index_plus];
    for (size_t i = 0; i < si; i++)
    {
        if (arr[i] < 0) {
            plus[i] = arr[i];
            cout << plus[i] << " | ";
        }
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int size = 20;
    int array[size]{};
    int* p_arr = init_array(array, size);
    print_array(p_arr, size);
    array_minus(p_arr, size);
    array_null(p_arr, size);
    array_plus(p_arr, size);

}

