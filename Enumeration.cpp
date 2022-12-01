#include <iostream>
using namespace std;
/*
Enumeration
- When printing an enumeration, an integer number is printed.
- The first element of the enumeration starts at zero.
- Elements are constant and cannot be modified or entered by the user.
*/
enum days{Satur = 1, Sun, Mon, Tues, Wednes, Thurs, Fri};
// Satur = 1 To begin at 1.
int main()
{
    string d[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    days m[7] = {Satur, Sun, Mon, Tues, Wednes, Thurs, Fri};
    for(int i = 0; i < 7; i++)
        cout << m[i] << " - " << d[i] << "\n";
    /*
    ------Output------
    1 - Saturday
    2 - Sunday
    3 - Monday
    4 - Tuesday
    5 - Wednesday
    6 - Thursday
    7 - Friday
    */
    return 0;
}
