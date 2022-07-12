// How many set bits an integer has in its binary representation

#include <iostream>
using namespace std;

int table[256]; // table for lookup table algorithm

class solution
{
public:
    unsigned int countSetBits_simple(unsigned int n)
    {
        unsigned int count = 0;
        while (n != 0)
        {
            if (n % 2 != 0) // or we can write if((n & 1) == 1)
                count++;

            // we can write count += (n & 1) in place of the if statement
            n = n / 2; // or we can write n = n >> 1
        }
        return count;
    } // TC O(number of total bits in n)

    unsigned int countSetBits_using_BK(int n)
    {
        unsigned int count = 0;
        while (n)
        {
            n &= (n - 1);
            count++;
        }
        return count;
    } // TC O(set bits count)

    void initialize()
    {
        // To initially generate the table algorithmically:
        table[0] = 0;
        for (int i = 0; i < 256; i++)
        {
            table[i] = (i & 1) + table[i / 2];
        }
    }

    int countSetBits_using_lookup_table(int n)
    {
        return table[n & 0xff] + // ff is hexadecimal representation of 8 set bits
               table[(n >> 8) & 0xff] +
               table[(n >> 16) & 0xff] +
               table[n >> 24];
    } // TC O(1)
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int i = 9;

        solution obSol;
        cout << "Simple Solution" << endl;
        obSol.countSetBits_simple(i);
        cout << "Using Brian and Kerningham's Algorithm" << endl;
        obSol.countSetBits_using_BK(i);
        cout << "Using lookup table" << endl;
        obSol.initialize();
        obSol.countSetBits_using_lookup_table(i);
    }
    return 0;
}