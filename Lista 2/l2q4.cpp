#include <iostream>
using namespace std;

void calcula(double a, double b, char op);

int main()
{
    double a, b;
    char op;

    cin >> a >> op >> b;

    calcula(a, b, op);

    return 0;

}

void calcula(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Operação inválida" << endl;
        break;
    }
}