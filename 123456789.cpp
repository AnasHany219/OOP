#include <iostream>
using namespace std;
class Circle{
private:
    double radius;
    string color;
public:
    Circle(){
        radius = 1.0;
        color = "red";
    }
    void getRadius(double r){
        radius = r;
    }
    void getColor(string c){
        color = c;
    }
    void getArea(){
        cout << 22 / 7 * radius * radius << "\n";
    }
};
int main(){
    Circle Ci;
    Ci.getRadius(7);
    Ci.getColor("Black");
    Ci.getArea();       // 147
    return 0;
}
