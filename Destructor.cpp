#include <iostream>
using namespace std;

class rectangle {
    private:
        double width;
        double height;
    public:
    // Default Constructor
        rectangle(){
            width = height = 0;
            cout << "Width = " << width << " Height = " << height << "\n";
        }
        rectangle(double width_, double height_){
            width = width_, height = height_;
             cout << "A rectangle has been created.\n";
        }
    // Destructor
        ~rectangle()
        {
            cout << width << " " << height << " A rectangle has been deleted.\n";
        }
        double computeArea(){
            return width * height;
        }
        double computePerimeter(){
            return (width + height) * 2;
        }
    //Accessors & Mutators
        double GetWidth(){
            return width;
        }
        void SetWidth(double width_){
            width = width_;
        }
        double GetHeight(){
            return height;
        }
        void SetHeight(double height_){
            height = height_;
        }
};

int main()
{
    // Objects -> r1 r2 r3
    rectangle r1(3, 4), r2(5, 6);
    rectangle r3;   // without default constructor, object r3 will make an error!
    cout << "Area = " << r1.computeArea() << "\n";
    cout << "Perimeter = " << r1.computePerimeter() << "\n\n";
    // destroy from down to up -> destroy r2 then r1
    /*
    -----------Output-----------
    A rectangle has been created.
    A rectangle has been created.
    Width = 0 Height = 0
    Area = 12
    Perimeter = 14

    0 0 A rectangle has been deleted.
    5 6 A rectangle has been deleted.
    3 4 A rectangle has been deleted.
    */
    return 0;
}
