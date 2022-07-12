// you are given a number, check whether this is a power of two or not

#include <iostream>
using namespace std;

class solution
{
public:
    bool isPow2_naive(int n)
    {
        if (n == 0)
            return true;

        while (n != 1)
        {
            if (n % 2 != 0)
                return false;

            n = n / 2;
        }

        return true;
    }

    bool isPow2_efficient(int n)
    {
        if (n == 0)
            return true;

        return ((n & (n - 1)) == 0);
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n = 4;

        solution obSol;
        cout << "Using naive approach" << endl;
        cout << obSol.isPow2_naive(n) ? "Yes" : "False";
        cout << endl;
        cout << "Using efficient approach" << endl;
        cout << obSol.isPow2_efficient(n) ? "Yes" : "False";
        cout << endl;
    }
    return 0;
}