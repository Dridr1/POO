#include <iostream>
using namespace std;


void mostraEspaco(int n);
void mostraPadrao(int n);

int main()
{
    int s = 4;

    for (int i = 1; i <= 5; i++)
    {
        mostraEspaco(s);
        s--;
        mostraPadrao(i);
    }
}

void mostraPadrao(int n)
{
    for (int j = 1; j <= n; j++)
    {
        cout << n << " ";
    }
    cout << endl;
}

void mostraEspaco(int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << " ";
    }
    
}