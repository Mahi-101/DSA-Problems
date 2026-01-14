#include <iostream>
using namespace std;
#include <vector>

// In this code we will performing Linear search on array and vector.

void Arrray_LS(int arr[], int s, int target)
{
    

    for (int i = 0; i < s; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found at index " << i<<endl;
            return;
        }
    }

    cout << "Target not found"<<endl;
}

void Vector_LS(vector<int> num, int s, int target)
{
    

    for (int i = 0; i < s; i++)
    {
        if (num[i] == target)
        {
            cout << "Target found at index " << i<<endl;
            return;
        }
    }

    cout << "Target not found"<<endl;
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    vector<int> num = {10,50,80,90,60,70};

    int s = sizeof(arr) / sizeof(int);

    Arrray_LS(arr, s, 02);
    Vector_LS(num, num.size(), 50);

    return 0;
}