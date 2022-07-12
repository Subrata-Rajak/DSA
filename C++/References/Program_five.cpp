/*
Applications:->

4. Avoiding making  copy of large objects in for each loop
*/

/*
Without reference

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vec{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};

    for (auto x : vec) // will work perfectly but inefficient
        cout << x << " ";
    return 0;
}
*/

// With reference

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vec{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};

    for (auto &x : vec) // efficient
        cout << x << " ";
    return 0;
}