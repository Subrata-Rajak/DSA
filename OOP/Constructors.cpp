// Normal Constructors

// #include <iostream>
// using namespace std;

// class Point
// {
//     int x, y;

// public:
//     Point()
//     {
//         x = 0;
//         y = 0;
//     }
//     Point(int userX, int userY)
//     {
//         x = userX;
//         y = userY;
//     }
//     void print()
//     {
//         cout << x << " " << y << endl;
//     }
// };

// int main()
// {
//     Point p1, p2(3, 4);
//     p1.print();
//     p2.print();

//     Point *ptr = new Point(10, 15);
//     ptr->print();
//     return 0;
// }

// With Initializer list

// #include <iostream>
// using namespace std;

// class Point
// {
//     int x, y;

// public:
//     Point() : x(0), y(0) {}
//     Point(int userX, int userY) : x(userX), y(userY) {}

//     void print()
//     {
//         cout << x << " " << y << endl;
//     }
// };

// int main()
// {
//     Point p1, p2(10, 20);
//     p1.print();
//     p2.print();

//     Point *ptr = new Point(3, 4);
//     ptr->print();
//     return 0;
// }

// Problems without Initializer list

// #include <iostream>
// using namespace std;

// class Test
// {
// public:
//     Test()
//     {
//         cout << "Default Constructor" << endl;
//     }
//     Test(int x)
//     {
//         cout << "Paramiterized Constructor" << endl;
//     }
// };

// class Main
// {
//     Test t;

// public:
//     Main()
//     {
//         t = Test(10);
//     }
// };

// int main()
// {
//     Main m;
//     return 0;
// }

// Copy Constructor

// Shallow Copy

#include <iostream>
using namespace std;

class Test
{
    int *ptr;

public:
    Test(int x)
    {
        ptr = new int(x);
    }
    void set(int x)
    {
        *ptr = x;
    }
    void print()
    {
        cout << *ptr << " ";
    }
};

int main()
{
    Test t1(10);
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}

// Deep Copy

#include <iostream>
using namespace std;

class Test
{
    int *ptr;

public:
    Test(int x)
    {
        ptr = new int(x);
    }
    Test(const Test &t)
    {
        int val = *(t.ptr);
        ptr = new int(val);
    }
    void set(int x)
    {
        *ptr = x;
    }
    void print()
    {
        cout << *ptr << " ";
    }
};

int main()
{
    Test t1(10);
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}