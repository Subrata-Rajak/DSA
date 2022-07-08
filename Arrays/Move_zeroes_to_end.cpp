// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void moveZeroesToEnd(int array[], int arraySize);

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
        cout << "Original array: ";
        printArray(array, arraySize);

        moveZeroesToEnd(array, arraySize);

        cout << "Modified Array: ";
        printArray(array, arraySize);
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

void moveZeroesToEnd(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == 0)
        {
            for (int j = i + 1; j < arraySize; j++)
                if (array[j] != 0)
                    swap(array[i], array[j]);
        }
    }
} // not working, will check later

// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void moveZeroesToEnd(int array[], int arraySize);

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
        cout << "Original array: ";
        printArray(array, arraySize);

        moveZeroesToEnd(array, arraySize);

        cout << "Modified Array: ";
        printArray(array, arraySize);
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

void moveZeroesToEnd(int array[], int arraySize)
{
    int count = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] != 0)
        {
            swap(array[i], array[count]);
            count++;
        }
    }
}