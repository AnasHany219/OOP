#include <iostream>
using namespace std;

int main(){
    int HH = 0, MM = 0, SS = 0;
    cout << "Enter Hours: ";        cin >> HH;
    cout << "Enter Minutes: ";      cin >> MM;
    cout << "Enter Seconds: ";      cin >> SS;

    MM += HH*60;
    SS += MM*60;

    cout << "Total Seconds: " << SS;
    return 0;
}
