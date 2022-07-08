#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int deleteElement(int array[], int arraySize, int toDelete);

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
        cout << "Before Deletion: ";
        printArray(array, arraySize);

        int toDelete;
        cin >> toDelete;

        arraySize = deleteElement(array, arraySize, toDelete);

        cout << "After deletion: ";
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

int deleteElement(int array[], int arraySize, int toDelete)
{
    int i = 0;

    for (i = 0; i < arraySize; i++)
    {
        if (array[i] == toDelete)
            break;
    }

    if (i == arraySize)
        return arraySize;

    for (int j = i; j < arraySize - 1; j++)
    {
        array[j] = array[j + 1];
    }

    return arraySize - 1;
}