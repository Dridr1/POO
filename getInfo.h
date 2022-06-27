#include <iostream>
#include <string>
using namespace std;

struct humanInfo
{
    string name;
    string gender;
    int age;
    float height;
};

humanInfo inputInfo()
{
    humanInfo newHuman;
    cout << "Insert your name:\n";
    cin >> newHuman.name;
    cout << "\nInsert your gender\n";
    cin >> newHuman.gender;
    cout << "\nInsert your age:\n";
    cin >> newHuman.age;
    cout << "\nInsert your height:\n";
    cin >> newHuman.height;

    return newHuman;
}
