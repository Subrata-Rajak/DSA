// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxEvenOdd(int arrray[], int arraySize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize;
        cin >> arraySize;

        int array[arraySize];
        takeArrayInput(array, arraySize);
        cout << "Original Array: ";
        printArray(array, arraySize);

        int subArraySize = maxEvenOdd(array, arraySize);

        cout << "Longest Even Odd alternating subarray is: " << subArraySize << endl;
    }
    return 0;
}

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

int maxEvenOdd(int array[], int arraySize)
{
    int res = 1;

    for (int i = 0; i < arraySize; i++)
    {
        int currentCount = 1;
        for (int j = i + 1; j < arraySize; j++)
        {
            if ((array[j] % 2 == 0 && array[j - 1] % 2 != 0) || (array[j] % 2 != 0 && array[j - 1] % 2 == 0))
                currentCount++;
            else
                break;
        }

        res = max(res, currentCount);
    }

    return res;
}

// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxEvenOdd(int arrray[], int arraySize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize;
        cin >> arraySize;

        int array[arraySize];
        takeArrayInput(array, arraySize);
        cout << "Original Array: ";
        printArray(array, arraySize);

        int subArraySize = maxEvenOdd(array, arraySize);

        cout << "Longest Even Odd alternating subarray is: " << subArraySize << endl;
    }
    return 0;
}

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

int maxEvenOdd(int array[], int arraySize)
{
    int res = 1, currentCount = 1;

    for (int i = 1; i < arraySize; i++)
    {
        if ((array[i] % 2 == 0 && array[i - 1] % 2 != 0) || (array[i] % 2 != 0 && array[i - 1] % 2 == 0))
        {
            currentCount++;
            res = max(res, currentCount);
        }
        else
            currentCount = 1;
    }

    return res;
}