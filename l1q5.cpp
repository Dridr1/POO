#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    int s = INT16_MAX, b = INT16_MIN;

    cin >> num;

    for (int i = 0; i < num.length(); i++)
    {
        int currentNumber = num[i] - 48;
        if (currentNumber > b)
            b = currentNumber;
        else if (currentNumber < s)
            s = currentNumber;
    }
    cout << "O algarismo mais significativo é: " << b << endl
         << "O algarismo menos significativo é: " << s << endl;

    return 0;
}