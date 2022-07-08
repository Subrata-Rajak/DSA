// O(n) TC & O(1) AS

// #include <iostream>
// using namespace std;

// void takeArrayInput(int array[], int arraySize);
// void printArray(int array[], int arraySize);
// int findLastOccurrence(int array[], int arraySize, int target);

// int main()
// {
//     int testcases;
//     cin >> testcases;

//     while (testcases--)
//     {
//         int arraySize;
//         cin >> arraySize;

//         int array[arraySize];
//         takeArrayInput(array, arraySize);
//         cout << "Original Array: ";

//         int target;
//         cin >> target;

//         printArray(array, arraySize);

//         int lastOccurrence = findLastOccurrence(array, arraySize, target);

//         cout << "The last occurrence of the target is: " << lastOccurrence << endl;
//     }
//     return 0;
// }

// void takeArrayInput(int array[], int arraySize)
// {
//     for (int index = 0; index < arraySize; index++)
//         cin >> array[index];
// }

// void printArray(int array[], int arraySize)
// {
//     for (int index = 0; index < arraySize; index++)
//         cout << array[index] << " ";

//     cout << endl;
// }

// int finLastOccurrence(int array[], int arraySize, int target)
// {
//     for (int i = arraySize - 1; i >= 0; i++)
//         if (array[i] == target)
//             return i;

//     return -1;
// }

// Recursive Implementation

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findLastOccurrence(int array[], int arraySize, int low, int high, int target);

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

        int target;
        cin >> target;

        printArray(array, arraySize);

        int lastOccurrence = findLastOccurrence(array, arraySize, 0, arraySize - 1, target);

        cout << "The last occurrence of the target is: " << lastOccurrence << endl;
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

int finLastOccurrence(int array[], int arraySize, int low, int high, int target)
{
    if (low < high)
        return -1;

    int mid = (low + high) / 2;

    if (array[mid] > target)
        return findLastOccurrence(array, arraySize, low, mid - 1, target);
    else if (array[mid] < target)
        return findLastOccurrence(array, arraySize, mid + 1, high, target);
    else
    {
        if (mid == arraySize - 1 || array[mid] != array[mid - 1])
            return mid;
        else
            return findLastOccurrence(array, arraySize, mid + 1, high, target);
    }
}