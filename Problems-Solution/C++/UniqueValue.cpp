#include <iostream>
using namespace std;

// HERE WE WILL Write a code to print unique numbers into an array.

void Uniquefinder(int arr[], int sz)
{
    bool uni = true;

    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                uni = false;
                break;
            }
            else
            {
                uni = true;
            }
        }
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                uni = false;
                break;
            }
        }
        if (uni)
        {
            cout << arr[i] << endl;
        }
    }

    return;
}

int main()
{
    int arr[5] = {1, 2, 2, 3, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    Uniquefinder(arr, s);

    return 0;
}