// kth bit from right side is set or not

#include <iostream>
using namespace std;

class solution
{
public:
    // using left shift operator
    void isKthBitSet_using_ls(int n, int k)
    {
        if (n & (1 << (k - 1)))
            cout << "SET";
        else
            cout << "NOT SET";
    }

    // using left right operator
    void isKthBitSet_using_rs(int n, int k)
    {
        if ((n >> (k - 1)) & 1)
            cout << "SET";
        else
            cout << "NOT SET";
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n = 5, k = 3;

        solution obSol;
        cout << "Using Left Shift Operator" << endl;
        obSol.isKthBitSet_using_ls(n, k);
        cout << "Using Right Shift Operator" << endl;
        obSol.isKthBitSet_using_rs(n, k);
    }
    return 0;
}