#include<iostream>
using namespace std;
#include<vector>

// IN THIS PROGRAM WE WILL PERFORMING REVERSING OF ARRAY AND VECTOR.    

void ReverseArr(int arr[], int s)
{
    int start=0, end=s-1;

    cout<<"Before Reversing the Array :\n";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<endl;
    }

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"After Reversing the Array :\n";
    for (size_t i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return;
}

void ReverseVec(vector<int> Vec, int s)
{
    int start = 0, end = s-1;

    cout<<"Before Reversing the Vector :\n";
    for(int i=0; i<s; i++)
    {
        cout<<Vec[i]<<endl;
    }

    while(start<=end)
    {
        swap(Vec[start],Vec[end]);
        start++;
        end--;
    }

    cout<<"After Reversing the Array :\n";
    for (size_t i = 0; i < s; i++)
    {
        cout<<Vec[i]<<endl;
    }
    
    return;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    vector<int> vec = {10,20,30,40,50};

    ReverseArr(arr, sizeof(arr)/sizeof(arr[0]));
    ReverseVec(vec, vec.size());

    return 0;
}