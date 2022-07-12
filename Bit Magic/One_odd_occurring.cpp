// you are given an array and in this array all numbers are occurring even number of times except one, find that!!

#include <iostream>
using namespace std;

class io
{
public:
    void takeArrayInput(int array[], int arraySize)
    {
        for (int index = 0; index < arraySize; index++)
            cin >> array[index];
    }

    void printArray(int array[], int arraySize)
    {
        for (int index = 0; index < arraySize; index++)
            cout << array[index] << " ";

        cout << endl;
    }
};

class solution
{
public:
    int findOdd_naive(int array[], int arraySize)
    {
        for (int i = 0; i < arraySize; i++)
        {
            int count = 0;

            for (int j = 0; j < arraySize; j++)
            {
                if (array[i] == array[j])
                    count++;
            }

            if (count % 2 != 0)
                return array[i];
        }
    } // TC O(n^2)

    int findOdd_efficient(int array[], int arraySize)
    {
        int res = 0;

        for (int i = 0; i < arraySize; i++)
        {
            res = res ^ array[i];
        }

        return res;
    } // TC O(n)
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize;
        cin >> arraySize;

        int array[arraySize];

        io obIo;

        obIo.takeArrayInput(array, arraySize);

        solution obSol;
        cout << "Using naive approach" << endl;
        obSol.findOdd_naive(array, arraySize);
        cout << "Using efficient approach" << endl;
        obSol.findOdd_efficient(array, arraySize);
    }
    return 0;
}