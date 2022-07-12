// you are given an array and in this array all numbers are occurring even number of times except two, find that two!!

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
    void oddAppearing_naive(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }

            if (count % 2 != 0)
                cout << arr[i] << " ";
        }
    } // TC O(n^2)

    void oddAppearing_efficient(int arr[], int n)
    {

        int xors = 0, res1 = 0, res2 = 0;

        for (int i = 0; i < n; i++)
            xors = xors ^ arr[i];

        int sn = xors & (~(xors - 1));

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & sn) != 0)
                res1 = res1 ^ arr[i];
            else
                res2 = res2 ^ arr[i];
        }

        cout << res1 << " " << res2;
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
        cout << "Naive Approach" << endl;
        obSol.oddAppearing_naive(array, arraySize);
        cout << "Efficient Approach" << endl;
        obSol.oddAppearing_efficient(array, arraySize);
    }
    return 0;
}