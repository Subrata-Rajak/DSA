// O(arraySize * d) TC and O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void leftRotateByd(int array[], int arraySize, int d);
void leftRotateOnce(int array[], int arraySize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize, d;
        cin >> arraySize >> d;

        int array[arraySize];
        takeArrayInput(array, arraySize);

        cout << "Before Rotation: ";
        printArray(array, arraySize);

        leftRotateByd(array, arraySize, d);

        cout << "After Rotation: ";
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

void leftRotateByd(int array[], int arraySize, int d)
{
    for (int i = 0; i < d; i++)
        leftRotateOnce(array, arraySize);
}

void leftRotateOnce(int array[], int arraySize)
{
    int temp = array[0];

    for (int i = 1; i < arraySize; i++)
        array[i - 1] = array[i];

    array[arraySize - 1] = temp;
}

// O(n) TC and O(d) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void leftRotate(int array[], int arraySize, int d);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize, d;
        cin >> arraySize >> d;

        int array[arraySize];
        takeArrayInput(array, arraySize);

        cout << "Before Rotation: ";
        printArray(array, arraySize);

        leftRotate(array, arraySize, d);

        cout << "After Rotation: ";
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

void leftRotate(int array[], int arraySize, int d)
{
    int temp[d];

    for (int i = 0; i < d; i++)
        temp[i] = array[i];

    for (int i = d; i < arraySize; i++)
        array[i - d] = array[i];

    for (int i = 0; i < d; i++)
        array[arraySize - d + i] = temp[i];
}

// O(n) TC and O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
void leftRotate(int array[], int arraySize, int d);
void reverse(int array[], int low, int high);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize, d;
        cin >> arraySize >> d;

        int array[arraySize];
        takeArrayInput(array, arraySize);

        cout << "Before Rotation: ";
        printArray(array, arraySize);

        leftRotate(array, arraySize, d);

        cout << "After Rotation: ";
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

void leftRotate(int array[], int arraySize, int d)
{
    reverse(array, 0, d - 1);
    reverse(array, d, arraySize - 1);
    reverse(array, 0, arraySize - 1);
}

void reverse(int array[], int low, int high)
{
    while (low < high)
    {
        swap(array[low], array[high]);
        low++;
        high--;
    }
}