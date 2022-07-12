/*
Applications:->
 
1. To modify a passed parameter
*/

/* 
The program with out reference (&)

#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 10, y = 15;
    swap(x, y); 
    cout << x << " " << y; // 10 15 (the values will not be swapped)
    return 0;
} 
*/

#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 10, y = 15;
    swap(x, y);
    cout << x << " " << y; // 15 10
    return 0;
}