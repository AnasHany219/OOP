#include <iostream>
#include <cstring>
using namespace std;

struct car
{
// Attributes
    string name;
    string color;
    int maxspeed;
    int model;
}a; // -> Declare struct
int main()
{
    a = {"Jeeb", "Red", 360, 2020};
// Declare Struct
    car g = {"KIA", "Black", 480, 2023};
// Compare between structs
    if(a.model < g.model)
        cout << "a is less than g\n";
    else
        cout << "g is less than a\n";
// Display Struct attributes
    cout << "Name : " << g.name << "\n"
         << "Color : " << g.color << "\n"
         << "MAX Speed : " << g.maxspeed << "\n"
         << "Model : " << g.model << "\n";

    /*
    ------Output------
    a is less than g
    Name : KIA
    Color : Black
    MAX Speed : 480
    Model : 2023
    */
    return 0;
}
