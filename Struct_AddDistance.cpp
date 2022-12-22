// Struct in Function
#include <iostream>
using namespace std;
struct Distance
{
// Attributes
        int feet;
        float inches;
};
//struct function
Distance add_distance(Distance d1, Distance d2)
{
// Declare struct
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
// return 2 value
    return result;
}
int main()
{
    Distance x, y, z;
    cout << "Enter feet values : \n";
    cin >> x.feet >> y.feet;
    cout << "Enter inches values : \n";
    cin >> x.inches >> y.inches;
    z = add_distance(x, y);
    cout << "z.feet = " << z.feet << " z.inches = " << z.inches << "\n";
    /*
    ---------Output---------
    Enter feet values :
    "User enter" -> 10 12
    Enter inches values :
    "User Inter" -> 5.14 9.12
    z.feet = 22 z.inches = 14.26
    */
    return 0;
}
