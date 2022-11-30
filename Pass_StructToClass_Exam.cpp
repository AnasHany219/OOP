// Struct in Function
#include <iostream>
#include <cstring>
using namespace std;
struct exam{
// Attributes
    float First;
    float Second;
    float Final;
};
class subject{
private:
    char name[10];
// Declare Struct
    exam Exam;
public:
// Default Constructor
    subject()
    {
        strcpy(name, "no name");
    // Detault value to struct
        Exam = {0, 0, 0};
    }
// parameterize Constructor;
    subject(char n[], float fa, float s, float fi)
    {
        strcpy(name, n);
    // Declare Struct values
        Exam = {fa, s, fi};
    }
// Return Total Summations
    float total()
    {
        return Exam.First + Exam.Second + Exam.Final;
    }
// Display
    void print()
    {
        cout << "The Subject : " << name << "\n"
             << "First Exam : " << Exam.First << "\n"
             << "Second Exam : " << Exam.Second << "\n"
             << "Final Exam : " << Exam.Final << "\n"
             << "The Total is : " << total() << "\n";
    }
};
int main()
{
    subject e("OOP", 25, 24, 49);
    e.print();
    /*
    ------Output------
    The Subject : OOP
    First Exam : 25
    Second Exam : 24
    Final Exam : 49
    The Total is : 98
    */
    return 0;
}
