#include <iostream>
using namespace std;
template<class T>
class A_Char{
public:
    A_Char(T x){
        cout << x << " is not a character\n";
    }
};
// Template Specialization
template<>
class A_Char<char>{
public:
    A_Char(char x){
        cout << x << " is a character\n";
    }
};
int main()
{
    A_Char <int> Obl(21);           // 21 is not a character
    A_Char <double> Ob2(21.9);      // 21.9 is not a character
    A_Char <char> Ob3('A');         // A is a character
    A_Char <string> Ob4("Anas");    // Anas is not a character

    return 0;
}
//  End of the main
