#include <iostream>
using namespace std;
class time{
private:
    int h, m, s;
public:
// Constant Function
    void print() const
    {
        cout << "The Time = " << h << " : " << m << " : " << s << "\n";
    }
// Parameterize Constructor
    time(int i, int j, int k)
    {
        h = i, m = j, s = k;
    }
};
//  End of the class
int main()
{
// Constant Object
// When we declare a constant object we cannot access functions that are not constant.
    const time noon1(12, 00, 00);
    noon1.print();      // The Time = 12 : 0 : 0
// When we declare a Non-constant object we can access functions that are constant or Non-constant.
    time noon2(06, 30, 15);
    noon2.print();      // The Time = 6 : 30 : 15
    return 0;   
}
//  End of the main
