#include <iostream>
using namespace std;

int mult(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << mult(a, b) << endl;

    return 0;
}

int mult(int a, int b)
{
    if (b % a == 0)
        return 1;
    else
        return 0;
}