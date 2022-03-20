#include <iostream>
#include <math.h>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void selectionSort(int array[], int arraySize);
void optimizedSelectionSort(int array[], int arraySize);

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
        cout << "Before Sorting: ";
        printArray(array, arraySize);

        optimizedSelectionSort(array, arraySize);
        cout << "After Sorting: ";
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

void selectionSort(int array[], int arraySize)
{
    int tempArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        int minInd = 0;
        for (int j = 1; j < arraySize; j++)
        {
            if (array[j] < array[minInd])
                minInd = j;
        }

        tempArray[i] = array[minInd];
        array[minInd] = INFINITY;
    }

    for (int i = 0; i < arraySize; i++)
    {
        array[i] = tempArray[i];
    }
}

void optimizedSelectionSort(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        int minInd = i;
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[j] < array[minInd])
                minInd = j;
        }
        swap(array[minInd], array[i]);
    }
}