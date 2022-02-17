#include <iostream>
using namespace std;

class add
{
public:
    int a, b;
    void get()
    {
        cout << "Enter 2 numbers\n";
        cin >> a >> b;
    }

    void addition()
    {
        int sum = a + b;
        cout << "sum: " << sum;
    }
};

int main()
{
    add obj;
    obj.get();
    obj.addition();
    return 0;
}