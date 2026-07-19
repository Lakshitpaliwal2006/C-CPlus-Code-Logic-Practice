
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 9, 1, 6, 0, 4, 8, 2, 7, 5};
    int length_arr = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int temp = 0;

    for (int i = 0; i < length_arr; i++)
    {
        if (arr[i] == target)
        {
            temp = i;
        }
    }
    if (!temp)
    {
        cout << "Target is Not Found";
    }
    else
    {
        cout << "Target is Found at index : " << " " << temp << endl;
    }
    return 0;
}