#include <iostream>
using namespace std;

double squareroot(double num, double l)
{

    /*
    Where,
    num: The number for which square root has to be computed.
    l: Tolerance limit for the newton's method.
    */

    double x = num; // Initial assumption of squareroot of n is n itself.
    double root;
    int itr = 0;
    while (true)
    {
        itr++;
        root = 0.5 * (x + num / x);
        if (abs(root - x) < l)
        {
            break;
        }

        x = root;
    }

    return root;
}
int main()
{
    double num;
    cout << "Enter the number \n";
    cin >> num;
    double l = 0.001; // Tolerance level
    cout << squareroot(num, l);
    return 0;
}