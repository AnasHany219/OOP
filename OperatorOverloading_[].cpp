#include <iostream>
using namespace std;
class arr{
private:
    int a[10];
public:
// Default Constructor
    arr(){
        for(int i = 0; i < 10; i++)
            a[i] = i;
    }
    int &operator [](int index){
        return a[index];
    }
};
int main()
{
    arr Ob;
    cout << Ob[2] << "\n";  // 2
    Ob[2] = 20;
    cout << Ob[2] << "\n";  // 20

    return 0;
}
//  End of the main
