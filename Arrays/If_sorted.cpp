// O(n^2)

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
bool sortedOrNot(int array[], int arraySize);

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
        cout << "The Array: ";
        printArray(array, arraySize);

        if (sortedOrNot(array, arraySize))
            cout << "Given Array is sorted" << endl;
        else
            cout << "Given Array is not sorted" << endl;
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

bool sortedOrNot(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
            if (array[i] > array[j])
                return false;
    }

    return true;
}

// O(n)

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
bool sortedOrNot(int array[], int arraySize);

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
        cout << "The Array: ";
        printArray(array, arraySize);

        if (sortedOrNot(array, arraySize))
            cout << "Given Array is sorted";
        else
            cout << "Given Array is not sorted";
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

bool sortedOrNot(int array[], int arraySize)
{
    for (int i = 0; i < arraySize - 1; i++)
    {
        if (array[i] > array[i + 1])
            return false;
    }

    return true;
}