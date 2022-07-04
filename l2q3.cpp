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
    cout << n-1 << ", " << n+1 << endl;
}
