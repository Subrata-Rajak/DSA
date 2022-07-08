#include <iostream>
using namespace std;

class Complex
{
    int real, image;

public:
    void print()
    {
        cout << real << " + i" << image << endl;
    }
    Complex(int r, int i)
    {
        real = r;
        image = i;
    }
};

int main()
{
    Complex c1(10, 15);
    c1.print();
    return 0;
}