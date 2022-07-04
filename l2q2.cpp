#include <iostream>
using namespace std;

void mostra(int n);

int main()
{
    int n;

    cin >> n;

    mostra(n);

    return 0;
}

void mostra(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}