#include <iostream>
using namespace std;

int LCM(int, int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        int lcm = LCM(num1, num2);

        cout << lcm << endl;
    }
    return 0;
}

int LCM(int num1, int num2)
{
    int lcm = max(num1, num2);

    while (true)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
            break;

        lcm++;
    }

    return lcm;
}

// Optimized using GCD

#include <iostream>
using namespace std;

int LCM(int, int);
int GCD(int, int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        int lcm = LCM(num1, num2);

        cout << lcm << endl;
    }
    return 0;
}

int LCM(int num1, int num2)
{
    return (num1 * num2) / GCD(num1, num2);
}

int GCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;

    return GCD(num2, num1 % num2);
}