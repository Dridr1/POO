#include <iostream>
#include <string>
using namespace std;

class human
{
public:
    string name, gender;
    int age;
    float height;

    human(string n, string g, int a, float h)
    {
        name = n;
        gender = g;
        age = a;
        height = h;
    }
    void displayData();
};

void human::displayData()
{
    cout << "\nName: " << name
         << "\nGender: " << gender
         << "\nAge: " << age
         << "\nHeight: " << height << "\n\n";
}