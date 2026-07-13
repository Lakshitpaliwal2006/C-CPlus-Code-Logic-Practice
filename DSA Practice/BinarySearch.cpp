
#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {3, 9, 1, 6, 0, 4, 8, 2, 7, 5};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int length_arr = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    int temp = 0;
    int Min_Value = 0;
    int Max_Value = length_arr - 1;
    int Mid_Value = (Min_Value + Max_Value) / 2;

    for (int i = 0; i < length_arr; i++)
    {
        if (arr[Mid_Value] == target)
        {
            temp = Mid_Value;
        }
        else if (arr[Mid_Value] < target)
        {
            Mid_Value += 1;
        }
        else if (arr[Mid_Value] > target)
        {
            Mid_Value -= 1;
        }
    }
    if (temp)
    {
        cout << "Target is Found at index : " << " " << temp << endl;
    }
    else
    {
        cout << "Target is Not Found";
    }
    return 0;
}