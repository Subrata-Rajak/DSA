// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int majorityElement(int array[], int arraySize);

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

        int majorElement = majorityElement(array, arraySize);

        cout << "The majority Element in the array is: " << majorElement << endl;
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

int majorityElement(int array[], int arraySize)
{
    int count = 0;
    for (int i = 0; i, arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if (count > arraySize / 2)
            return i;
    }

    return -1;
}

// O(n) TC & O(1)

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int majorityElement(int array[], int arraySize);

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

        int majorElement = majorityElement(array, arraySize);

        cout << "The majority Element in the array is: " << majorElement << endl;
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

int majorityElement(int array[], int arraySize)
{
    int res = 0, count = 1;

    for (int i = 1; i < arraySize; i++)
    {
        if (array[res] == array[i])
            count++;
        else
            count--;

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    count = 0;

    for (int i = 0; i < arraySize; i++)
        if (array[res] == array[i])
            count++;

    if (count <= arraySize / 2)
        res = -1;

    return res;
}