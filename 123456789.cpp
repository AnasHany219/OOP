#include <iostream>
#include <cstring>
using namespace std;

class employee{
private:
    char employee_name[20];
    int employee_salary;
public:
    employee(){
        strcpy(employee_name, "NoName");
        employee_salary = 0;
    }
    void accept(char n[], int s){
        strcpy(employee_name, n);
        employee_salary = s;
    }
    void display(){
        cout << "Name: " << employee_name
             << ", Salary: " << employee_salary
             << "\n";
    }
};
int main(){
    employee em;
    em.accept("Anas", 12000);
    em.display();
    return 0;
}
