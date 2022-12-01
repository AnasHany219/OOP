#include <iostream>
using namespace std;
string da[7] = {"Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri"};
enum Days{Satur = 1, Sun, Mon, Tues, Wednes, Thurs, Fri};
// Satur = 1 To begin at 1.
// Class
class week{
private:
    Days d[7];
public:
    void setday(Days w[])
    {
        for(int i = 0; i < 7; i++)
            d[i] = w[i];
    }
// Display Days of week
    void print()
    {
        for(int i = 0; i < 7; i++)
            cout << "The number of days " << da[i] << " = " << d[i] << "\n";
    }
};
int main()
{

    Days d[7] = {Satur, Sun, Mon, Tues, Wednes, Thurs, Fri};
// Object
    week g;
    g.setday(d);
    g.print();
    /*
    ------Output------
    The number of days Sat = 1
    The number of days Sun = 2
    The number of days Mon = 3
    The number of days Tue = 4
    The number of days Wed = 5
    The number of days Thu = 6
    The number of days Fri = 7
    */
    return 0;
}
