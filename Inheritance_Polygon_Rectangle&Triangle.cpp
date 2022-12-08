#include <iostream>
using namespace std;
class Polygon{
protected:
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a; height = b;
    }
};
//  End of the Class
// Inheritance is a class can copy data from another class
class Rectangle : public Polygon{
public:
    int area(){
        return (width * height);
    }
};
//  End of the Class
class Triangle : public Polygon{
public:
    int area(){
        return (width * height / 2);
    }
};
//  End of the Class

int main()
{
    Rectangle R1;   // Has width & height & set_value
    Triangle T1;    // Has width & height & set_value
    R1.set_values(4, 5);
    T1.set_values(4, 5);
    cout << R1.area() << "\n";
    cout << T1.area() << "\n";
    return 0;
}
//  End of the main
