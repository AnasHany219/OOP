#include <iostream>
#include <cstring>
using namespace std;

class Student {
    private:
    // Member Private
        char name[20];
        int ID;
    public:
    // Empty Constructor
        Student(){
            cout << "Object Created\n";
        }
    // Destructot
        ~Student(){
            cout << "Objected Destructed.\n";
        }
    //Member Function Set
        void Set_Name_ID(char n[], int id)
        {
            strcpy(name, n);
            ID = id;
        }
    //Member Function print
        void print(void)
        {
            cout << name << "\t" << ID << "\n";
        }
}; // End of class definition
// Non Member Function
void F(Student S)
{
    Student S1;
    S1 = S;
    S.Set_Name_ID("Anas", 4210085);
    S.print();
    S1.print();
}
int main()
{
    Student St1, St2;
    St1.Set_Name_ID("Islam", 11111);
    St2.Set_Name_ID("Ali", 22222);
    cout << "Going To Function\n";
    F(St1);
    cout << "Back from function\n";
    St1.print();
    /*
    ------Output------
    Object Created
    Object Created
    Going To Function
    Object Created
    Anas    4210085
    Islam   11111
    Objected Destructed.
    Objected Destructed.
    Back from function
    Islam   11111
    Objected Destructed.
    Objected Destructed.
    */
    return 0;
}
