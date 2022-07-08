// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxSubarraySum(int array[], int arraySize);

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

        int maxSum = maxSubarraySum(array, arraySize);

        cout << "Maximum Subarray Sum is: " << maxSum << endl;
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

int maxSubarraySum(int array[], int arraySize)
{
    int res = array[0];

    for (int i = 0; i < arraySize; i++)
    {
        int currentSum = 0;
        for (int j = i; j < arraySize; j++)
        {
            currentSum += array[j];
            res = max(res, currentSum);
        }
    }

    return res;
}

// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxSubarraySum(int array[], int arraySize);

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

        int maxSum = maxSubarraySum(array, arraySize);

        cout << "Maximum Subarray Sum is: " << maxSum << endl;
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

int maxSubarraySum(int array[], int arraySize)
{
    int res = array[0], maxEnding = array[0];

    for (int i = 0; i < arraySize; i++)
    {
        maxEnding = max(maxEnding + array[i], array[i]);
        res = max(res, maxEnding);
    }

    return res;
}