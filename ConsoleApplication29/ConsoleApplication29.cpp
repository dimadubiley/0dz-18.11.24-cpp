#include <iostream>
using namespace std;

template <typename T>
void Sum(T a, T b)
{
    cout << "Sum(T, T): " << a + b << endl;
}

template <typename T, typename X>
void Sum(T a, X b)
{
    cout << "Sum(T, X): " << a + b << endl;
}

template <class T>
void Init(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
        arr[i] = static_cast<T>(rand() % 100 * 1.1);
}

template <class T>
T Max1D(T arr[], int size)
{
    T max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
        return max;
    }
}

template <class T>
T Max2D(T arr[][5], int rows, int cols)
{
    T max = arr[0][0];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (arr[i][j] > max)
                max = arr[i][j];
    return max;
}

template <class T>
T Max3D(T arr[][3][3], int x, int y, int z)
{
    T max = arr[0][0][0];
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            for (int k = 0; k < z; ++k)
                if (arr[i][j][k] > max)
                    max = arr[i][j][k];
    return max;
}

template <class T>
T MaxTwo(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <class T>
T MaxThree(T a, T b, T c)
{
    return max(a, max(b, c));
}

template <class T>
void Print(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1D[10];
    double double1D[5];
    char char1D[8];

    Init(arr1D, 10);
    Init(double1D, 5);
    Init(char1D, 8);

    cout << "1D: ";
    Print(arr1D, 10);

    cout << "1D double: ";
    Print(double1D, 5);

    cout << "Arr1D char: ";
    Print(char1D, 8);

    cout << "Max 1D: " << Max1D(arr1D, 10) << endl;
    cout << "Max 1D double: " << Max1D(double1D, 5) << endl;

    int arr2D[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15} };
    cout << "Max 2D: " << Max2D(arr2D, 3, 5) << endl;

    int arr3D[2][3][3] =
    {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}
    };
    cout << "Max 3D: " << Max3D(arr3D, 2, 3, 3) << endl;

    cout << "Max two num: " << MaxTwo(10, 20) << endl;

    cout << "Max three num: " << MaxThree(10, 20, 15) << endl;

}
