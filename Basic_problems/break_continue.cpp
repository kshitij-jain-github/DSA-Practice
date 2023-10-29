#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == 2 && j == 2)
            {
                {
                    continue;
                    // break;
                }
            }
            
                cout << i << " , " << j << "\t";
          
        }
        cout << endl;
    }
    return 0;
}