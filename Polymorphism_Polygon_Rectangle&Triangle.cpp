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
// virtual to access area to other sons "Rectangle, Triangle"
// without virtual all areas will take the value in father "Polygon"
    virtual int area(){
        return (0);
    }
};
//  End of the Class
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
    Rectangle R;
    Triangle T;
    Polygon P;
// Polymorphism
    Polygon *p1, *p2, *p3;
    p1 = &R;
    p2 = &T;
    p3 = &P;
    p1->set_values(4, 5);
    p2->set_values(4, 5);
    p3->set_values(4, 5);
    cout << p1->area() << "\n";     // 20
    cout << p2->area() << "\n";     // 10
    cout << p3->area() << "\n";     // 0
    return 0;
}
//  End of the main
