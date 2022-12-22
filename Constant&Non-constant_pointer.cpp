#include <iostream>
using namespace std;

int main()
{
//Arrays are constant pointers
    int arr[5] = {10, 50, 40, 77, 33};

    cout << arr << "\n";            // address of the first element
    cout << *arr << "\n";           // content of the first element -> 10
    cout << arr+2 << "\n";          // address of the third element
    cout << *(arr+2) << "\n";       // content of the third element -> 40
    for(int i = 0; i< 5; i++)
        cout << *(arr+i) << " ";    //10 50 40 77 33
    cout << "\n";

    int *p;
    p = arr;                        // with first element like -> p = &arr[0]
    cout << *p << "\n";             // content of the first element -> 10
    cout << *(p+2) << "\n";         // content of the third element -> 40
    cout << *p+2 << "\n";           // content of the first element + 2 -> 13
    p += 2;                         // with third element like -> p = &arr[2]
    cout << *p << "\n";             // content of the third element -> 40

    p = arr;                        // with first element like -> p = &arr[0]
    for(int i = 0; i< 5; i++)
        cout << *(p+i) << " ";      //10 50 40 77 33
    cout << "\n";

// Not constant
    for(int i = 0; i< 5; i++)
        cout << *(p++) << " ";      //10 50 40 77 33


    return 0;
}
