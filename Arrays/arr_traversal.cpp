#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 4};

    for (int i : arr)
        cout << arr[1] << "\t";

    cout << endl;

    // it will give of arr[i] to i to iterate
    for (int i : arr)
        cout << arr[i] << "\t";

    cout << endl;

    // taversing each element
    for (int i : arr)
        cout << i << "\t";

    return 0;
}