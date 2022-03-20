#include <iostream>
#include <vector>
using namespace std;

vector<int> takeVectorInput(vector<int> vec, int vectorSize);
void printVector(vector<int> vec, int vectorSize);
vector<int> bubbleSort(vector<int> vec, int vectorSize);
vector<int> optimizedBubbleSort(vector<int> vec, int vectorSize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int vectorSize;
        cin >> vectorSize;

        vector<int> vec;
        vec = takeVectorInput(vec, vectorSize);

        cout << "Before Sorting: ";
        printVector(vec, vectorSize);

        vec = optimizedBubbleSort(vec, vectorSize);

        cout << "After Sorting: ";
        printVector(vec, vectorSize);
    }
    return 0;
}

vector<int> takeVectorInput(vector<int> vec, int vectorSize)
{
    for (int index = 0; index < vectorSize; index++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    return vec;
}

void printVector(vector<int> vec, int vectorSize)
{
    for (auto index = vec.begin(); index != vec.end(); index++)
        cout << *index << " ";

    cout << endl;
}

vector<int> bubbleSort(vector<int> vec, int vectorSize)
{
    for (int index1 = 0; index1 < vectorSize - 1; index1++)
    {
        for (int index2 = 0; index2 < vectorSize - index1 - 1; index2++)
        {
            if (vec[index2] > vec[index2 + 1])
                swap(vec[index2], vec[index2 + 1]);
        }
    }

    return vec;
}

vector<int> optimizedBubbleSort(vector<int> vec, int vectorSize)
{
    for (int index1 = 0; index1 < vectorSize - 1; index1++)
    {
        bool swapped = false;
        for (int index2 = 0; index2 < vectorSize - index1 - 1; index2++)
        {
            if (vec[index2] > vec[index2 + 1])
            {
                swap(vec[index2], vec[index2 + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }

    return vec;
}