#include <iostream>
using namespace std;

void displayResult(float a, float b, float ans, char opt);
float calculate(float a, float b, char opt);

int main()
{
    char usrOpt, opt;
    float a, b;

    do
    {
        cout << "Insira o primeiro número: ";
        cin >> a;
        cout << "Insira a operação que deseja realizar: ";
        cin >> opt;
        cout << "Insira o segundo número: ";
        cin >> b;

        float ans = calculate(a, b, opt);
        displayResult(a, b, ans, opt);

        cout << "Deseja realizar outra operação? [s/n]: ";

    } while (usrOpt  == 's' || usrOpt == 'S');
    
    
}

float calculate(float a, float b, char opt)
{
    float ans;

    switch (opt)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    default:
        cout << "Operação inválida";
        break;
    }

    return ans;
}

void displayResult(float a, float b, float ans, char opt)
{
    cout << a << opt << b << "=" << ans << endl;
}
