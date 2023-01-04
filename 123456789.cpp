#include <iostream>
using namespace std;

int main(){
    for(int t = -20; t <= 20; t++){
        if(t >= 0){
            cout << "t = " << t
                 << ", y(t) = " << -3 * t * t + 5
                 << "\n";
        }
        else{
            cout << "t = " << t
                 << ", y(t) = " << 3 * t * t + 5
                 << "\n";
        }
    }
    return 0;
}
