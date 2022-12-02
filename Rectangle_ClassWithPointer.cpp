#include <iostream>
using namespace std;
class Rectangle{
private:
    int *width, *height;
public:
// Default constructor
    Rectangle(int, int);
// Destructor
    ~Rectangle();
// Compute area
    int area()
    {
        return (*width * *height);
    }
};
// Parameterize constructor
Rectangle::Rectangle(int a, int b){
    width = new int;    // To take a new memory for storage an integer value.
    height = new int;
    *width = a;
    *height = b;
}
// Destructor
Rectangle::~Rectangle(){
    delete width;       // Returns the memory that is reserved for storing an integer value.
    delete height;
}
int main()
{
    Rectangle r1(10, 20);
    cout << r1.area();
    return 0;
}
