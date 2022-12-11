#include <iostream>
using namespace std;
template <class T>
class Number{
private:
    T first; T second;
public:
    Number(T x, T y){
        first = x, second = y;
    }
// The body for max function outside the calss
    T max();
};
// Member Function Outside The class
// Must put the scope resolution with template
template <class T>
T Number<T>:: max(){
    return (first > second ? first : second);
}
int main()
{
    Number <int> Ob1(10.5, 5);
    cout << Ob1.max() << "\n";      // 10

    Number <double> Ob2(10.5, 5);
    cout << Ob2.max() << "\n";      // 10.5
    return 0;
}
//  End of the main
