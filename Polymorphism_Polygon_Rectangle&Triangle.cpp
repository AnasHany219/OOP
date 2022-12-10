#include <iostream>
using namespace std;
// Abstract Class
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
    virtual int area() = 0;
    void PrintArea(){
        cout << this->area() << "\n";
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
// Polygon P; => incorrect
// Polymorphism
    Polygon *p1 = &R;                   // Early Binding
    Polygon *p2 = &T;
    p1->set_values(4, 5);
    p2->set_values(4, 5);
    cout << p1->area() << "\n";         // 20
    cout << p2->area() << "\n";         // 10
    p1->PrintArea();                    // 20
    p2->PrintArea();                    // 10
    Polygon *p[2] = {&R, &T};
    for(int i = 0; i < 2; i++){
        //cout << p[i]->area() << "\n"; // Late Binding
        p[i]->PrintArea();
    }
    return 0;
}
//  End of the main
