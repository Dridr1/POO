#include <iostream>
using namespace std;

int main()
{
    int i, f;

    cin >> i >> f;

    while (i <= f)
    {
        if (i % 2 == 0)
        {
            cout << i << ' ';
        }
        i++;
    }
    return 0;
}