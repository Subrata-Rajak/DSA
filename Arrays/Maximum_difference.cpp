// maximum value of array[j] - arrray[i] such that j > i

// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxDiff(int array[], int arraySize);

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

        int maximumDifference = maxDiff(array, arraySize);

        cout << "The maximum difference is: " << maximumDifference;
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

int maxDiff(int array[], int arraySize)
{
    int res = array[1] - array[0];

    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = 0; j < arraySize; j++)
            res = max(res, array[j] - array[i]);
    }

    return res;
}

// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxDiff(int array[], int arraySize);

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

        int maximumDifference = maxDiff(array, arraySize);

        cout << "The maximum difference is: " << maximumDifference;
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

int maxDiff(int array[], int arraySize)
{
    int res = array[1] - array[0], minVal = array[0];

    for (int j = 0; j < arraySize; j++)
    {
        res = max(res, array[j] - minVal);
        minVal = min(minVal, array[j]);
    }

    return res;
}