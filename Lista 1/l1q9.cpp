#include <iostream>
using namespace std;

float celsiusToFahrenheit(float TInCelsius);
float fahrenheitToCelsius(float TInFahrenheit);
void convert(int opt);

int main()
{
    int option;
    cout << "Digite 1 para converter de Fahrenheit para Celsius" << endl
         << "Digite 2 para converter de Celsius para Fahrenheit" << endl;
    cin >> option;
    convert(option);
    return 0;
}

void convert(int opt)
{
    float temp, converted;
    switch (opt)
    {
    case 1:
        cout << "Digite uma temperatura em Fahrenheit: ";
        cin >> temp;
        converted = fahrenheitToCelsius(temp);
        cout << converted << endl;
        break;
    case 2:
        cout << "Digite uma temperatura em Celsius: ";
        cin >> temp;
        converted = celsiusToFahrenheit(temp);
        cout << converted << endl;
        break;
    }
}

float celsiusToFahrenheit(float TInCelsius)
{
    return ((TInCelsius * 9) / 5) + 32;
}

float fahrenheitToCelsius(float TInFahrenheit)
{
    return (TInFahrenheit - 32) * (5 / 9);
}