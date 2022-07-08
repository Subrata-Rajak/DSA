// O(n^2) TC & O(1)

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maximumConsecutiveOnes(int array[], int arraySize);

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

        int maxConOnes = maximumConsecutiveOnes(array, arraySize);

        cout << "The number of maximum consecutive ones: " << maxConOnes << endl;
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

int maximumConsecutiveOnes(int array[], int arraySize)
{
    int res = 0;

    for (int i = 0; i < arraySize; i++)
    {
        int currCount = 0;
        for (int j = i; j < arraySize; j++)
        {
            if (array[j] == 1)
                currCount++;
            else
                break;
        }
        res = max(res, currCount);
    }

    return res;
}

// O(n) TC & O(1)

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maximumConsecutiveOnes(int array[], int arraySize);

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

        int maxConOnes = maximumConsecutiveOnes(array, arraySize);

        cout << "The number of maximum consecutive ones: " << maxConOnes << endl;
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

int maximumConsecutiveOnes(int array[], int arraySize)
{
    int currentCount = 0, res = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == 0)
            currentCount = 0;
        else
        {
            currentCount++;
            res = max(res, currentCount);
        }
    }

    return res;
}