#include <iostream>
#include <string>
#include "Human.h"
#include "getInfo.h"
using namespace std;

int main()
{
    humanInfo newHumanInfo;
    newHumanInfo = inputInfo();
    human newHuman(newHumanInfo.name, newHumanInfo.gender, newHumanInfo.age, newHumanInfo.height);
    newHuman.displayData();

    return 0;
}