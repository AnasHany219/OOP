#include <iostream>
#include <cstring>
using namespace std;

class phone {
    private:
        char name[10];
        char model[10];
        int price;
    public:
    // Empty Constructor
        phone(){}
    // parameterize constructor
        phone(char n[], char m[], int p)
        {
            strcpy(name, n);
            strcpy(model, m);
            price = p;
        }
    // Function print is a member function for this class but the complete is outside the class.
        void print();
    // Destructor outside the class.
        ~phone();
};
// phone:: -> for define the destructor from the class.
phone::~phone()
{
    cout << "Object destructed\n";
}
// phone:: -> for define the variables from the class.
void phone::print(){
    cout << "Name : " << name << "\n"
         << "Model : " << model << "\n"
         << "Price : " << price << "\n";
}
int main()
{
    phone obj1, obj2("HUWAWI", "META", 15000);
//Don't forget the () after every void function.
    obj2.print();
    /*
    --------------OutPut-----------
    Name : HUWAWI
    Model : META
    Price : 15000
    Object destructed
    Object destructed
    */
    return 0;
}
