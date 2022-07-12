#include <iostream>
#include <math.h>
using namespace std;

class solution
{
public:
    void printPowerSet(string str)
    {
        int n = str.length();

        int powSize = pow(2, n);

        for (int counter = 0; counter < powSize; counter++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((counter & (1 << j)) != 0)
                    cout << str[j];
            }

            cout << endl;
        }
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        string s = "abc";

        solution obSol;

        obSol.printPowerSet(s);
    }
    return 0;
}