#include <iostream>
using namespace std;
class Unary{
private:
    int x, y;
public:
// Parameterize Constructor
    Unary(int a = 0, int b = 0){
        x = a, y = b;
    }
    void showdata(){
        cout << x << " " << y << "\n";
    }
// PreFix
    Unary operator ++ (){
        x++, y++;
        return *this;
    }
// PostFix
    Unary operator ++ (int){
        Unary T;
        T = *this;
        x++, y++;
        return T;
    }
    bool operator ! (){
        return (x == 0 && y == 0);
    }
    Unary operator += (Unary C2){
        x += C2.x;
        y += C2.y;
        return *this;
    }
};
//  End of the Class
int main()
{
    Unary A(10, 15), K;
    K = A++;
    A.showdata();   // 11 16
    K.showdata();   // 10 15
    K = ++A;
    K.showdata();   // 12 17
    A.showdata();   // 12 17
    cout << "\n-------------------\n";
    Unary B(1, 1);
    if(!B)
        cout << "True\n";
    else
        cout << "False\n";
    cout << "\n-------------------\n";
    Unary C(1, 2), C1(2, 1);
    C += C1;
    C.showdata();
    return 0;
}
//  End of the main
