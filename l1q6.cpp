#include <iostream>
#include <string>
using namespace std;

int getSumTilZero(int n)
{
    int sum = 0;

    for (int i = n; i > 0; i--)
    {
        sum += i;
    }

    return sum;
}

int main()
{   
    string s = "1";

    for (int i = 1; i <= 5; i++)
    {
        cout << s << "=" << getSumTilZero(i) << endl;
        s+="+" + to_string(i+1);
    }

    return 0;
    
}