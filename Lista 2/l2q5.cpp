#include <iostream>
using namespace std;

void mostra(int n, char c);

int main()
{
    int n;
    char c;

    cin >> n >> c;

    mostra(n, c);
    return 0;
}

void mostra(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}