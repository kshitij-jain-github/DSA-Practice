#include <iostream>
using namespace std;

int main()
{
no_vote:
    cout << "you can't vote" << endl;
    cout << "Enter your age  ? " << endl;
    int age;
    cin >> age;

    if (age < 18)
        goto no_vote;
    else
        cout << "You can vote";
    return 0;
}