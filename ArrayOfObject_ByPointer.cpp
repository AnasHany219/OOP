#include <iostream>
#include <cstring>
using namespace std;

class Student{
private:
    char name[20];
    int ID;
public:
// Empty Constructor
    Student(){
        cout << "empty\n";
        strcpy(name, "no name");
        ID = 0;
    }
// Parameterize Constructor
    Student(char n[], int id)   //Constructor overloading
    {
        cout << "Parameterize\n";
        strcpy(name, n);
        ID = id;
    }
// Display
    void print(){
        cout << "Name: " << name << "\n"
             << "ID: " << ID << "\n";
    }
};

int main()
{
    Student S1("Anas", 4210085), S2("Islam", 4210060), *p;
// Array of Object -> Array of user defined student
    Student arr[4] = {S1, S2, Student("Ali", 4210094)};
    for(int i = 0; i < 4; i++)
        arr[i].print();
    cout << "--------------\n";
    p = arr;
    for(int i = 0; i < 4; i++)
        p++->print();

    /*
    ----Output----
    Parameterize
    Parameterize
    Parameterize
    empty
    Name: Anas
    ID: 4210085
    Name: Islam
    ID: 4210060
    Name: Ali
    ID: 4210094
    Name: no name
    ID: 0
    --------------
    Name: Anas
    ID: 4210085
    Name: Islam
    ID: 4210060
    Name: Ali
    ID: 4210094
    Name: no name
    ID: 0
    */

    return 0;
}
