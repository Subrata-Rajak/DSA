/*
Applications:->

3. modification in for each loop
*/

/*
Without using reference

here we are making a copy (x) of every vector element and we are changing that copied variable 
not the vector element

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{10, 20, 30, 40};
    for (auto x : vec)
        x = x + 5;
    for (auto x : vec)
        cout << x << " "; // 10 20 30 40
    return 0;
}

*/

// With reference

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{10, 20, 30, 40};
    for (auto &x : vec)
        x = x + 5;
    for (auto x : vec)
        cout << x << " "; // 15 25 35 45
    return 0;
}