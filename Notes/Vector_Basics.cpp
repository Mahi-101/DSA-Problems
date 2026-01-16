#include <iostream>
using namespace std;
#include <vector>

// In this code we will how to initialize the vectore datatype and its functions. Also we see the for each loop of vector.

void VecOperation(vector<int> vec)
{
    cout << "Values of Vector : \n";
    for (int val : vec)
    {
        cout << val << "\n";
    }

    cout << "Functions of Vector : \n";
    // 1. size() :- return the total count of elements which are stored in vector.
    /* There is a difference between size() and sizeof() function.
        -> size() is a vector function which used to check the total count of elements stored in vector.
        -> sizeof() is used to calculate the memory allocated to the dataypte.
    */
    cout << "By use of vec.size() : " << vec.size();

    // 2. push_back() :- used to store value at the end of vector.
    cout<<"\n use of vec.push_back(100) : \n";
    vec.push_back(100);
    for (int val : vec)
    {
        cout << val << "\n";
    }

    // 3. pop_back() :- used to delete an element from end of the vector.
    cout<<"\n use of vec.pop_back() : \n";
    vec.pop_back();
    for (int val : vec)
    {
        cout << val << "\n";
    }

    // 4. front() :- used to access the first element of the vector.
    cout<<"\n use of vec.front() : "<<vec.front();

    // 5. back() :- used to access the last element of the vector.
    cout<<"\n use of vec.back() : "<<vec.back();

    // 6. at(3) :- use to access the ith element of the vector.
    cout<<"\n use of vec.at(3) : "<<vec.at(3); 

    return;
}

int main()
{
    // Initialization of vector.

    // 1.
    vector<int> vec;

    // 2.
    vector<int> vec2 = {1,2,3,4,5};

    // 3. 
    vector<int> vec3(3,0);  // here 3 is the size and 0 is the value for all indexes.
    
    VecOperation(vec2);

    return 0;
}