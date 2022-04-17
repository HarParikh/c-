#include <iostream>
using namespace std;
int sum_of_numbers(int n)
{
    int x, sum = 0;
    cout << "Enter the number of terms for which you want the sum \n";
    cin >> x;
    for (int i = 0; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    cout << sum_of_numbers(10) << endl;
    return 0;
}