#include <iostream>
using namespace std;


struct strucEx
{
    int coisa1;
    float coisa2;
    char coisa3;
    bool coisa4;
};

strucEx myFunc();

int main()
{   strucEx myvar;

    myvar = myFunc();

    cout << myvar.coisa2;

    return 0;
}

strucEx myFunc()
{
    strucEx mystruct;

    mystruct.coisa1 = 69;
    mystruct.coisa2 = 4.20;
    mystruct.coisa3 = 'c';
    mystruct.coisa4 = true;

    return mystruct;
}