#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> myPair(1, 12), yourPair(9, 12);

    cout << (myPair == yourPair) << endl;
    cout << (myPair != yourPair) << endl;
    cout << (myPair > yourPair) << endl;
    cout << (myPair < yourPair) << endl;
    return 0;
}