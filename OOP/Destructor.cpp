// #include <iostream>
// using namespace std;

// class Test
// {
// public:
//     Test()
//     {
//         cout << "Constructor called" << endl;
//     }
//     ~Test()
//     {
//         cout << "Destructor called" << endl;
//     }
// };

// int main()
// {
//     Test t1;
//     return 0;
// }

// 2nd Example

// #include <iostream>
// using namespace std;

// class Test
// {
// public:
//     Test()
//     {
//         cout << "Constructor called" << endl;
//     }
//     ~Test()
//     {
//         cout << "Destructor called" << endl;
//     }
// };

// int main()
// {
//     {
//         Test t1;
//     }
//     Test t2;
//     return 0;
// }

// 3rd example

#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int i) : x(i)
    {
        cout << "Cons" << x << endl;
    }
    ~Test()
    {
        cout << "Dest" << x << endl;
    }
};

int main()
{
    Test t1(10);
    Test t2(20);
    return 0;
}