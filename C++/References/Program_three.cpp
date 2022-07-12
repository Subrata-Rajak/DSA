/*
Applications:->

2. Avoiding making copy of large objects during function calls

if we don't use reference then it copies the 1000 sized vector and it's a time and memory consuming work
but if we use reference then it simply refers to the same memory location and access from there 
*/

#include <iostream>
#include <vector>

using namespace std;

void Print(vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 1000; i++)
        v.push_back(i);
    Print(v);
    return 0;
}