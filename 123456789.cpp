#include <iostream>
using namespace std;
class room{
private:
    int width, length;
public:
    void Set_Width(){
        cin >> width;
    }
    void Set_Length(){
        cin >> length;
    }
    void area(){
        cout << "Area: " << width * length << "\n";
    }
};
int main(){
    room a;
    cout << "Enter Width (feet): ";
    a.Set_Width();      // 10
    cout << "Enter Length (feet): ";
    a.Set_Length();     // 15

    a.area();           // 150

    return 0;
}
