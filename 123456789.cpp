#include <iostream>
#include <cstring>
using namespace std;

class Distance{
private:
    int feet;
    int inch;
public:
    Distance(){
        feet = inch = 0;
    }
    Distance(int f, int i){
        feet = f;
        inch = i;
    }
    int getFeet(){
        return feet + inch / 12;
    }
    void display(){
        cout << "Distance = "
             << feet << " feet, "
             << inch << " inch\n";
    }
};
string minDist(Distance D1, Distance D2){
    int feet1 = D1.getFeet();
    int feet2 = D2.getFeet();

    return (feet1 >= feet2? "D1" : "D2");
}
int main(){
    Distance D1(10, 15), D2(15, 10);
    cout << minDist(D1, D2);    // D2
    return 0;
}
