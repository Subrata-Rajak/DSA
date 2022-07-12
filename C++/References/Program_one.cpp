#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x; // here y is a reference variable which is referring to x

    cout << y << " "; // 10

    x = x + 5; // 10 + 5 (if i make change to one variable)
    cout << y << " "; // 15 (changes will be reflected in other variables too which were referring to that variable)

    y = y + 5; // 15 + 5
    cout << x << " "; // 20
    return 0;
}