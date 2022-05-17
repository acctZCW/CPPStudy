#include <iostream>
#include <cctype>

using namespace std;

int Fill_array(double arr[], int arrSize);
void Show_array(double arr[], int arrSize);
void Reverse_array(double arr[], int arrSize);

int main()
{
    double arr[20];
    int nums = Fill_array(arr, 20);
    Show_array(arr, nums);

    // reverse the arr
    Reverse_array(arr,nums);
    Show_array(arr,nums);
    return 0;
}

int Fill_array(double arr[], int arrSize)
{
    double n;
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Please input the num: ";
        cin >> n;
        if (cin.fail())
            return i;

        arr[i] = n;
    }
    return arrSize;
}

void Show_array(double arr[], int arrSize)
{
    cout << "The array is: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i];
        if (i != arrSize - 1)
            cout << ", ";
    }
    cout << "\n";
}

void Reverse_array(double arr[], int arrSize)
{
    double temp;
    for (int i = 0; i < arrSize / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[arrSize - 1 - i];
        arr[arrSize - 1 - i] = temp;
    }
}