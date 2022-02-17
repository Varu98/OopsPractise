#include <iostream>
using namespace std;

class function_Overloading
{
public:
    void addition(int a, int b)
    {
        cout << a + b << endl;
    }

    void addition(int a, int b, int c, int d)
    {
        cout << a + b + c + d << endl;
    }
};

int main()
{
    function_Overloading fo;
    fo.addition(9, 8);
    fo.addition(9, 8, 7, 6);
    return 0;
}