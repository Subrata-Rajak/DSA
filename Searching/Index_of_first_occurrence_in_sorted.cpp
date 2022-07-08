// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findFirstOccurrence(int array[], int arraySize, int target);

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

        int target;
        cin >> target;

        cout << "Original Array: ";
        printArray(array, arraySize);

        int firstOccurrence = findFirstOccurrence(array, arraySize, target);

        cout << "The first occurrence of the target is: " << firstOccurrence << endl;
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

int findFirstOccurrence(int array[], int arraySize, int target)
{
    for (int i = 0; i < arraySize; i++)
        if (array[i] == target)
            return i;

    return -1;
}

// Recursive Solution

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findFirstOccurrence(int array[], int arraySize, int low, int high, int target);

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

        int target;
        cin >> target;

        cout << "Original Array: ";
        printArray(array, arraySize);

        int firstOccurrence = findFirstOccurrence(array, arraySize, 0, arraySize - 1, target);

        cout << "The first occurrence of the target is: " << firstOccurrence << endl;
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

int findFirstOccurrence(int array[], int arraySize, int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (array[mid] > target)
        return findFirstOccurrence(array, arraySize, low, mid - 1, target);
    else if (array[mid] < target)
        return findFirstOccurrence(array, arraySize, mid + 1, high, target);
    else
    {
        if (mid == 0 || array[mid - 1] != array[mid])
            return mid;
        else
            return findFirstOccurrence(array, arraySize, low, mid - 1, target);
    }
}

// Iterative Implementation of the before solution

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findFirstOccurrence(int array[], int arraySize, int target);

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

        int target;
        cin >> target;

        cout << "Original Array: ";
        printArray(array, arraySize);

        int firstOccurrence = findFirstOccurrence(array, arraySize, target);

        cout << "The first occurrence of the target is: " << firstOccurrence << endl;
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

int findFirstOccurrence(int array[], int arraySize, int target)
{
    int low = 0, high = arraySize - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] > target)
            high = mid - 1;
        else if (array[mid] < target)
            low = mid + 1;
        else
        {
            if (mid == 0 || array[mid - 1] != array[mid])
                return mid;
            else
                high = mid - 1;
        }
    }

    return -1;
}