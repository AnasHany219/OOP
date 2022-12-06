#include <iostream>
using namespace std;
class Number{
private:
    int num;
public:
// Default Constructor
    Number(){
        num = 0;
    }
// Parameterize Constructor
    Number(int x){
        num = x;
    }
    int GetNum(){
        return num;
    }
    operator int(){
        return int(num);
    }
};
int main()
{
    Number Ob(20);
    int x = 10;
    x = Ob;     // x = 20
    cout << x;  // 20
    return 0;
}
//  End of the main
