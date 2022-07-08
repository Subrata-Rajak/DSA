// O(n^2) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maxCircularSum(int array[], int arraySize);

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

        int maxSum = maxCircularSum(array, arraySize);

        cout << "The maximum subarray sum is: " << maxSum << endl;
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

int maxCircularSum(int array[], int arraySize)
{
    int res = array[0];

    for (int i = 0; i < arraySize; i++)
    {
        int curr_max = array[i];
        int curr_sum = array[i];

        for (int j = 1; j < arraySize; j++)
        {
            int index = (i + j) % arraySize;

            curr_sum += array[index];

            curr_max = max(curr_max, curr_sum);
        }

        res = max(res, curr_max);
    }
    return res;
}

// O(n) TC & O(1) AS

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int normalMaxSum(int array[], int arraySize);
int overallMaxSum(int array[], int arraySize);

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

        int maxSum = overallMaxSum(array, arraySize);

        cout << "The maximum subarray sum is: " << maxSum << endl;
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

int normalMaxSum(int array[], int arraySize)
{
    int res = array[0];

    int maxEnding = array[0];

    for (int i = 1; i < arraySize; i++)
    {
        maxEnding = max(maxEnding + array[i], array[i]);

        res = max(maxEnding, res);
    }

    return res;
}

int overallMaxSum(int array[], int arraySize)
{
    int max_normal = normalMaxSum(array, arraySize);

    if (max_normal < 0)
        return max_normal;

    int arr_sum = 0;

    for (int i = 0; i < arraySize; i++)
    {
        arr_sum += array[i];

        array[i] = -array[i];
    }

    int max_circular = arr_sum + normalMaxSum(array, arraySize);

    return max(max_circular, max_normal);
}