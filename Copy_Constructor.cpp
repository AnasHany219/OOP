#include <iostream>
using namespace std;

class Copy{
private:
    int a1, a2, a3, a4, a5, a6, a7, a8;
public:
    Copy(int aa1, int aa2, int aa3, int aa4, int aa5, int aa6, int aa7, int aa8)
    {
        a1 = aa1;
        a2 = aa2;
        a3 = aa3;
        a4 = aa4;
        a5 = aa5;
        a6 = aa6;
        a7 = aa7;
        a8 = aa8;
    }
    Copy(const Copy &value)
    {
        a1 = value.a1;
        a2 = value.a2;
        a3 = value.a3;
        a4 = value.a4;
        a5 = value.a5;
        a6 = value.a6;
        a7 = value.a7;
        a8 = value.a8;
    }
    void print()
    {
        cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << " " << a7 << " " << a8 << "\n";
    }
};


int main()
{
    Copy g(1, 2, 3, 4, 5, 6, 7, 8);
    g.print();    // 1 2 3 4 5 6 7 8
    Copy h(g);
    h.print();    // 1 2 3 4 5 6 7 8

    return 0;
}
