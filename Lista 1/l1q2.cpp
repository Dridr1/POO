#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "É uma vogal" << endl;
    }
    else
        cout << "Não é uma vogal" << endl;

    return 0;
}