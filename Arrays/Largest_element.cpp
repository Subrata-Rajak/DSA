// O(n^2) solution

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findLargest(int array[], int arraySize);

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
        cout << "The array: ";
        printArray(array, arraySize);

        int largest = findLargest(array, arraySize);

        cout << "The Largest Element: " << array[largest];
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

int findLargest(int array[], int arraySize)
{
    int largest;

    for (int i = 0; i < arraySize; i++)
    {
        bool flag = true;
        for (int j = 0; j < arraySize; j++)
        {
            if (array[j] > array[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return i;
    }

    return -1;
}

// O(n)

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findLargest(int array[], int arraySize);

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

        int largest = findLargest(array, arraySize);

        cout << "The largest element in the array is: " << largest;
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

int findLargest(int array[], int arraySize)
{
    int largest = INT_MIN;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] > largest)
            largest = array[i];
    }

    return largest;
}