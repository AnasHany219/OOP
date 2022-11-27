#include <iostream>
#include <cmath>                // For Square Root
using namespace std;

class Isosceles_Triangle{       // Class
private:
    float base;
    float height;
public:
    Isosceles_Triangle()        // Empty Constructor
    {
        cout << "First Constructor.\n\n";
        base = height = 0;
    }
    Isosceles_Triangle(float b, float h)   // parameterize Constructor
    {
        base = b, height = h;
        cout << "Second Constructor.\n\n";
    }
  /*void setBase(float b)       // insert Base
    {
        base = b;
    }
    void setHeight(float h)     // insert Height
    {
        height = h;
    }*/
    float area()                // compute Area
    {
        cout << 0.5 * base * height;
    }
    float perimeter()           // compute Perimeter
    {
        cout << (base) + (2 * (sqrt((height * height) + (0.5 * base) * (0.5 * base))));
    }
    void print()
    {
        cout << "Base      = " << base        << "\n"
             << "Height    = " << height      << "\n"
             << "Area      = " << area()      << "\n"
             << "Perimeter = " << perimeter() << "\n";
    }
};


int main()
{
    Isosceles_Triangle x1;
    // x1.setBase(8);
    // x1.setHeight(3);
    x1.print();
    
    Isosceles_Triangle x2(8, 3);
    x2.print();
    return 0;
}
