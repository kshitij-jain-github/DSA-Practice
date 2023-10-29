#include <iostream>
using namespace std;

int main()
{

    int x = 8; // binary value of x = 8 is 1000

    cout << (x >> 1) << endl; // right shift one bit --- 0100 = 4 (output)
    cout << (x << 1) << endl; // left shift one bit --- 10000 = 4 (output)
    return 0;
}