#include <iostream>
using namespace std;

class operator_overloading
{
public:
    void addition(int a, int b)
    {
        cout << a + b << endl;
    }

    void addition(string a, string b)
    {
        cout << a + b << endl;
    }
};

int main()
{
    operator_overloading fo;
    fo.addition(9, 8);
    fo.addition("a", "b");
    return 0;
}