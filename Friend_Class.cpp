#include <iostream>
using namespace std;
// Friend Classes
class Square;
class Rectangle{
private:
    int width, height;
public:
// Compute Area
    int area(void)
    {
        return width * height;
    }
// Class Member
    void convert(Square);
};  //  End of the class 1
class Square{
private:
    int side;
public:
    void Set_side(int x)
    {
        side = x;
    }
    friend class Rectangle;
};  // End of the class 2
void Rectangle::convert(Square a)
{
    width = a.side;
    height = a.side;
}
int main()
{
    Square sqr;
    Rectangle rect;
    sqr.Set_side(4);
    rect.convert(sqr);
    cout << rect.area();    // 4 * 4 = 16
    return 0;
}
//  End of the main
