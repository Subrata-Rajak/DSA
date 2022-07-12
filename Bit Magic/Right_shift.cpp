#include <iostream>
using namespace std;

int main()
{

    int x = 33;

    cout << (x >> 1) << endl; // (number whose binary representation to be shifted (x) << how many bits to be shifted (y))

    cout << (x >> 2) << endl;

    int y = 4;

    int z = x >> y;

    cout << z << endl;

    return 0;
}

// right shift = [x / pow(2, y)]