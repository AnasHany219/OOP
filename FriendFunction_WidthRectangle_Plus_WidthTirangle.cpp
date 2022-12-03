#include <iostream>
using namespace std;
class Triangle;
class Rectangle{
private:
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a; height = b;
    }
    friend int sum(Triangle T, Rectangle R);
};
//  End of the class 1
class Triangle{
private:
    int w, h;
public:
    Triangle(int a, int b)
    {
        w = a; h = b;
    }
    friend int sum(Triangle T, Rectangle R);
};
//  End of the class 2
int sum(Triangle T, Rectangle R)
{
    return T.w + R.width;
}
int main()
{
    Rectangle r;
    r.set_values(2, 3);
    Triangle t(5, 10);
    cout << sum(t, r) << "\n";  // 5 + 2 = 7
    return 0;
}
//  End of the main
