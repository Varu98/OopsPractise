#include <iostream>
using namespace std;

class car
{
public:
    int sl, m, w;

    void get()
    {
        cout << "Enter the speed limit\n";
        cin >> sl;
        cout << "Enter the mileage\n";
        cin >> m;
        cout << "Enter the wheels\n";
        cin >> w;
    }

    void print()
    {
        cout << "speed limit: "
             << sl << endl;
        cout << "mileage: "
             << m << endl;
        cout << "wheels: "
             << w << endl;
    }
};

int main()
{
    car obj;
    obj.get();
    obj.print();

    return 0;
}