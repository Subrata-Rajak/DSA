#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void printGroups(int array[], int arraySize);

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

        printGroups(array, arraySize);
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

void printGroups(int array[], int arraySize)
{
    for (int i = 1; i < arraySize; i++)
    {
        if (array[i] != array[i - 1])
        {
            if (array[i] != array[0])
                cout << "From " << i << " to ";
            else
                cout << (i - 1) << endl;
        }
    }

    if (array[arraySize - 1] != array[0])
        cout << (arraySize - 1) << endl;
}