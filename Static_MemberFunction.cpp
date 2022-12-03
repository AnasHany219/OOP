//This type of function can be accessed in two ways:
#include <iostream>
#include <cstring>
using namespace std;
class Student{
private:
    static int count;
    char name[20];
    int first, second, fianl, total, ID;
public:
// by static void we can display count by two ways in main
    static void Print_Count(){
        cout << "Student Constructor: " << count << "\n";
    }
// Default Constructor
    Student(){
        strcpy(name, "No Name");
        ID = 0;
        first = second = fianl = 0;
    // Initial value for count is outside the class
        count++;
    Print_Count();
    }

};
// End of the class
int Student::count = 0;
int main()
{
// Display count
    Student::Print_Count(); 
    // count = 0;
    cout << "\nConstruct 2 object\n";
    Student S1, S2;     // count += 2
    // count = 2
    cout << "\nConstruct 3 object\n";
    Student St[3];      // count += 3
    // count = 5
    /*
    --------Output--------
    Student Constructor: 0

    Construct 2 object
    Student Constructor: 1
    Student Constructor: 2

    Construct 3 object
    Student Constructor: 3
    Student Constructor: 4
    Student Constructor: 5
    */
    return 0;
}
//  End of the main
