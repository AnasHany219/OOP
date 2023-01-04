#include <iostream>
using namespace std;

int main(){
    int n, rn = 0;
    cout << "Enter an integer: ";
    cin >> n;   // 12345

    while(n > 0){
        rn *= 10;       // 0    | 50    | 540   | 5430  | 54320
        rn += n % 10;   // 5    | 54    | 543   | 5432  | 54321
        n /= 10;        // 1234 | 123   | 12    | 1     | 0
    }

    cout << "The integer after reverse: " << rn;
    return 0;
}
