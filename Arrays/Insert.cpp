#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int insert(int array[], int arraySize, int capacity, int value, int position);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize, capacity;
        cin >> arraySize >> capacity;

        int array[arraySize];
        takeArrayInput(array, arraySize);
        cout << "Before Insertion: ";
        printArray(array, arraySize);

        int value, position;
        cin >> value >> position;

        arraySize = insert(array, arraySize, capacity, value, position);

        cout << "After Insertion: ";
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

int insert(int array[], int arraySize, int capacity, int value, int position)
{
    if (arraySize == capacity)
        return arraySize;

    int index = position - 1;

    for (int i = arraySize - 1; i >= index; i--)
        array[i + 1] = array[i];

    array[index] = value;

    return arraySize + 1;
}