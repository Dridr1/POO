#include <iostream>
using namespace std;

int mdc(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << mdc(a, b) << endl;

    return 0;
}

int mdc(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return mdc(b, a % b);
}