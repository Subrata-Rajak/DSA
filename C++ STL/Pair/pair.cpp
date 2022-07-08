#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> pairOne(3, 4);

    /*
    intialisation of a pair can be done like this also
    pairOne = {10, 20};
    or
    pairOne = make_pair(10, 20);
    */
   
    pair<int, string> pairTwo(3, "Subrata");

    cout << pairOne.first << " " << pairOne.second << endl;
    cout << pairTwo.first << " " << pairTwo.second << endl;
    return 0;
}