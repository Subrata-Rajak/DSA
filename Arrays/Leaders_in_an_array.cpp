// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void leaders(int array[], int arraySize);

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

        cout << "Leaders: ";
        leaders(array, arraySize);
        cout << endl;
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

void leaders(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[i] <= array[j])
            {
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << array[i] << " ";
    }
}

// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void leaders(int array[], int arraySize);

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

        cout << "Leaders: ";
        leaders(array, arraySize);
        cout << endl;
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

void leaders(int array[], int arraySize)
{
    int currentLeader = array[arraySize - 1];
    cout << currentLeader << " ";

    for (int i = arraySize - 2; i >= 0; i--)
    {
        if (array[i] > currentLeader)
        {
            currentLeader = array[i];
            cout << currentLeader << " ";
        }
    }
}