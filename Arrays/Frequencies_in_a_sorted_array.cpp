#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void printFrequency(int array[], int arraySize);

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

        printFrequency(array, arraySize);
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

void printFrequency(int array[], int arraySize)
{
    int frequency = 1, i = 1;

    while (i < arraySize)
    {
        while (i < arraySize && array[i] == array[i - 1])
        {
            frequency++;
            i++;
        }

        cout << "Frequency of " << array[i - 1] << " is " << frequency << endl;
        frequency = 1;
        i++;
    }

    if (arraySize == 1 || array[arraySize - 1] != array[arraySize - 2])
        cout << "Frequency of " << array[arraySize - 1] << " is " << frequency << endl;
}