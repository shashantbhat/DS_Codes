#include <iostream>
using namespace std;

int binary_search(int arr[], int num, int len)
{
    int i = 0, j = len - 1;
    int mid = -1;
    while (i <= j && mid != i)
    {
        mid = (i + j) / 2;
        //        cout << mid<<" "<<i;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (num < arr[mid])
        {
            j = mid;
        }
        else
        {
            i = mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 10;
    cout << binary_search(arr, num, len) << endl;
}
