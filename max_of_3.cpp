#include <iostream>
using namespace std;
void max_number_finder(int x, int y, int z)
{
    if (x > y && x > z)
    {
        cout << x;
    }
    else if (y > z)
    {
        cout << y;
    }
    else
    {
        cout << z;
    }
}
int main()
{
    max_number_finder(2, 3, 4);
    return 0;
}