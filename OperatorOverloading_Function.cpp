#include <iostream>
using namespace std;
class Binary{
private:
    int x, y;
public:
// Parameterize Constructor
    Binary(int i = 0, int j = 0){
        x = i, y = j;
    }
    Binary operator + (Binary C2){
        Binary C3;
        C3.x = x + C2.x;
        C3.y = y + C2.y;
        return C3;
    }
// Operation Overloading
    Binary &operator + (int &n){
        Binary C3;
        C3.x = x + n;
        C3.y = y + n;
        return C3;
    }
// Display
    void ShowData(){
        cout << x << " " << y << "\n";
    }
// Friend Function Overloading
    friend Binary operator + (int n, Binary C1);
};
//  End of the Class
// Operation Function Overloading
Binary operator + (int n, Binary C1){
    Binary C3;
    C3.x = C1.x + n;
    C3.y = C1.y + n;
    return C3;
}
int main()
{
    Binary C1(1, 1), C2(2, 2), C3;
    C3 = C1 + C2;
    C3.ShowData();
    C3 = C1 + 2;
    C3.ShowData();   // 10 20
    C3 = 10 + C1;
    C3.ShowData();   // 20 30
    return 0;
}
//  End of the main
