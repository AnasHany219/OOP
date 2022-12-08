#include <iostream>
using namespace std;
class GrandMother{
public:
    GrandMother(){
        cout << "GrandMother: Empty Constructor\n";
    }
    GrandMother(int c){
        cout << "GrandMother: Parameterize Constructor = " << c << "\n";
    }
};
// constructor, destructor, and friend class are inherited directly.
class Mother : public GrandMother{
public:
    Mother(){
        cout << "Mother: Empty Constructor\n";
    }
    // Inherited Empty Constructor
    Mother(int b){
        cout << "Mother: Parameterize Constructor = " << b << "\n";
    }
};
// End of the Class
class Daughter : public Mother{
public:
    Daughter(){
        cout << "Daughter: Empty Constructor\n";
    }
    // Inherited Parameterize Constructor
    Daughter(int a) : Mother(a){
        cout << "Daughter: Parameterize Constructor = " << a << "\n";
    }
};
// End of the Inheritance Class


int main()
{
    Daughter sarah(5);
    /*
    ----------------Output----------------
    GrandMother: Empty Constructor
    Mother: Parameterize Constructor = 5
    Daughter: Parameterize Constructor = 5
    */
    return 0;
}
//  End of the main
