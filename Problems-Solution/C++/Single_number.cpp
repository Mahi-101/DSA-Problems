#include<iostream>
using namespace std;
#include<vector>

//In this code we are going to solve a problem to find single number by using bitwise operators.

int Single_number(vector<int> vec)
{
    int ans = 0; // here I am using int datatype because my vector stores int dataytype.

    for(int val : vec)
    {
        ans ^= val;
    }

    return ans;
}

int main()
{
    vector<int> vec = {1,2,3,1,5,2};

    cout<<"Single number : "<<Single_number(vec);

    return 0;
}