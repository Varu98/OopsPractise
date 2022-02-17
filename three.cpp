#include <iostream>
using namespace std;

class rect
{
private:
    // data hidden from outside world
    int a, b;

public:
    // function to set value of
    // variable x and y
    int set_value(int x, int y)
    {
        a = x;
        b = y;
    }

    int print_value()
    {
        int area = a * b;
        return area;
    }
};

int main()
{
    rect r;

    r.set_value(2, 8);
    cout << r.print_value();
}

// :

// ::