#include <iostream>
using namespace std;

int GCD(int, int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        int gcd = GCD(num1, num2);

        cout << gcd << endl;
    }
    return 0;
}

int GCD(int num1, int num2)
{
    int gcd = min(num1, num2);

    while (gcd > 0)
    {
        if (num1 % gcd == 0 && num2 % gcd == 0)
            break;

        gcd--;
    }

    return gcd;
}

// Euclidean theorem

#include <iostream>
using namespace std;

int GCD(int, int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        int gcd = GCD(num1, num2);

        cout << gcd << endl;
    }
    return 0;
}

int GCD(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 = num1 - num2;
        else if (num1 < num2)
            num2 = num2 - num1;
    }

    return num1;
}

// Better implementation of Euclidean theorem

#include <iostream>
using namespace std;

int GCD(int, int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        int gcd = GCD(num1, num2);

        cout << gcd << endl;
    }
    return 0;
}

int GCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;

    return GCD(num2, num1 % num2);
}