#include <iostream>
using namespace std;

float calculate(float a, float b, char opt);
bool verifyOperation(char opt);
// void isItNice(float ans); //Essa função é apenas uma brincadeira interna entre amigos :))

int main()
{
    float a, b, ans;
    char opt, rewind;
    bool isValid;

    do
    {
        cout << "Insira o primeiro número: ";
        cin >> a;
        cout << "Insira a operação desejada [+|-|*|/]: ";
        cin >> opt;

        isValid = verifyOperation(opt);
        if (isValid == false)
        {
            cout << "Operação inválida" << endl;
            rewind = 's';
            continue;
        }

        cout << "Insira o segundo número: ";
        cin >> b;
        ans = calculate(a, b, opt);
        cout << a << opt << b << "=" << ans << endl;
        
        // isItNice(ans);

        while (true)
        {
            cout << "Deseja realizar outra operação? [s/N]: ";
            cin >> rewind;

            if (rewind == 's' || rewind == 'S' || rewind == 'N' || rewind == 'n')
                break;
        }

    } while (rewind == 's' || rewind == 'S');

    cout << "Tchau, se cuida!" << endl;

    return 0;
}

float calculate(float a, float b, char opt)
{
    switch (opt)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}

bool verifyOperation(char opt)
{
    if (opt == '+' || opt == '-' || opt == '*' || opt == '/')
        return true;
    else
        return false;
}

// void isItNice(float ans)
// {
//     if (ans == 69)
//         cout << "( ͡° ͜ʖ ͡°) Nice!" << endl;
//     else if (ans == 420)
//         cout << "( ͡o ͜ʖ ͡o) ohhh, weed!" << endl;
// }