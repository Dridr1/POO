#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite um número: ";
    cin >> num;

    for (int i = 1; i < 200; i++)
    {
        if (i % 10 == 0)
            cout << num * i << ' ' << endl;
        else
            cout << num * i << ' ';
    }

    return 0;
}