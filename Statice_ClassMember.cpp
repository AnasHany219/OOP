#include <iostream>
#include <cstring>
using namespace std;
//define how many object created
class Student{
private:
    static int count;
    char name[20];
    int first, second, fianl, total, ID;
public:
// Default Constructor
    Student(){
        strcpy(name, "No Name");
        ID = 0;
        first = second = fianl = 0;
    // Initial value for count is outside the class
        count++;
        cout << "Numbers of Students constructor = " << count << "\n";
    }

};
// End of the class
int Student::count = 0;
int main()
{
    // count = 0
    cout << "\nConstruct 2 object\n";
    Student S1, S2;     // count += 2;
    // count = 2
    cout << "\nConstruct 3 object\n";
    Student St[3];      // count += 3;
    // count = 5
    /*
    ---------------Output---------------
        
    Construct 2 object
    Numbers of Students constructor = 1
    Numbers of Students constructor = 2

    Construct 3 object
    Numbers of Students constructor = 3
    Numbers of Students constructor = 4
    Numbers of Students constructor = 5
    */
    return 0;
}
//  End of the main
