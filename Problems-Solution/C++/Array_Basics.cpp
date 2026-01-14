#include<iostream>
using namespace std;

// In this code we will see the different ways to initialize Array Datatype.

    /*
        1. Initialization at declaration (full intialization)
        2. Partial initialization (rest become 0)
        3. Zero initialization
        4. Without specifying size (compiler deduces size)
        5. Using loop (runtime initialization)
        6. Using user input
        7. Using constant expression
        8. Character array using string literal
        9. Designated initialization 
        10. Using fill function (STL way)
    */

void ArrayInitialization()
{
    int x;

    cout<<"Following are the way to initialize the Array. \n 1. Initialization at declaration (full intialization) \n 2. Partial initialization (rest become 0) \n 3. Zero initialization \n 4. Without specifying size (compiler deduces size) \n 5. Using loop (runtime initialization)\n 6. Using user input\n 7. Using constant expression\n 8. Character array using string literal\n 9. Designated initialization \n 10. Using fill function (STL way)";
    cout<<"Enter the number :";
    cin>>x;

    switch (x)
    {
    case 1 :
        int arr1[5] = {1,2,3,4,5,};
        break;
    case 2 :
        int arr2[5] = {1,2};
        break;
    case 3 :
        int arr3[5] = {0};
        break;
    case 4 :
        int arr4[] = {10,20,30};
        break;
    case 5 :
        int arr5[5];
        for(int i=0; i<5; i++)
            arr5[i] = i+1;
        break;
    case 6 :
        int arr6[5];
        for(int i=0; i<5; i++)
            cin>>arr6[i];
        break;
    case 7 :
        int arr7[5] = {2*3,4+1,10/2,7-2,7%2};
        break;
    case 8 :
        char str[] = "Hello";
        break;
    case 9 :
        int arr9[5] = {[0]=10,[3]=40};
        break;
    case 10 :
        int arr10[5];
        fill(arr10, arr10+5, 7);
        break;

    default:
        cout<<"Entered invalid number !!! \n";
        break;
    }
}

int main()
{
    

    ArrayInitialization();

    return 0;

}