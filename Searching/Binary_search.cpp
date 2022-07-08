// Iterative Implement

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
bool binarySearch(int array[], int arraySize, int target);

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

        if (binarySearch(array, arraySize, target))
            cout << target << " is present" << endl;
        else
            cout << target << " is not present" << endl;
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

bool binarySearch(int array[], int arraySize, int target)
{
    int low = 0, high = arraySize - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2; // more optimized than (high + low) / 2

        if (array[mid] == target)
            return true;
        else if (array[mid] > target)
            high = mid - 1;
        else if (array[mid] < target)
            low = mid + 1;
    }

    return false;
}

// Recursive Implement

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
bool binarySearch(int array[], int arraySize, int low, int high, int target);

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

        if (binarySearch(array, arraySize, 0, arraySize - 1, target))
            cout << target << " is present" << endl;
        else
            cout << target << " is not present" << endl;
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

bool binarySearch(int array[], int arraySize, int low, int high, int target)
{
    if (low > high)
        return false;

    int mid = low + (high - low) / 2;

    if (array[mid] == target)
        return true;

    else if (array[mid] > target)
        return binarySearch(array, arraySize, low, mid - 1, target);

    else
        return binarySearch(array, arraySize, mid + 1, high, target);
}