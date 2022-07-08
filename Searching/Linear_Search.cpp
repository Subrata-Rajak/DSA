#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
bool linearSearch(int array[], int arraySize, int target);

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

        if (linearSearch(array, arraySize, target))
            cout << target << " is present" << endl;
        else
            cout << target << " is not presented" << endl;
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

bool linearSearch(int array[], int arraySize, int target)
{
    for (int i = 0; i < arraySize; i++)
        if (array[i] == target)
            return true;

    return false;
}