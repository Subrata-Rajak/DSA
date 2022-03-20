#include <iostream>
using namespace std;

long long int fact(int);
int countTrailingZeroes(long long int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num;
        cin >> num;

        long long int factorial = fact(num);

        int trailing0s = countTrailingZeroes(factorial);

        cout << trailing0s << endl;
    }
    return 0;
}

long long int fact(int num)
{
    if (num == 0)
        return 1;

    return num * fact(num - 1);
}

int countTrailingZeroes(long long int factorial)
{
    int count = 0;

    while (factorial > 0)
    {
        if (factorial % 10 == 0)
        {
            count++;
            factorial /= 10;
        }
        else
            break;
    }

    return count;
}

// Optimized

#include <iostream>
using namespace std;

int countTrailingZeroes(int);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num;
        cin >> num;

        int trailing0s = countTrailingZeroes(num);

        cout << trailing0s << endl;
    }
    return 0;
}

int countTrailingZeroes(int num)
{
    int count = 0;

    for (int i = 5; i <= num; i *= 5)
    {
        count += num / i;
    }

    return count;
}