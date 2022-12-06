#include <iostream>
using namespace std;
class Relational{
private:
    int x, y, z;
public:
// Default Constructor
    Relational(){
        x = y = z = 0;
    }
// Parameterize Constructor
    Relational(int a, int b, int c){
        x = a, y = b, z = c;
    }
// Operation Equal
    int operator == (Relational B){
        return (x == B.x && y == B.y && z == B.z);
    }
// Operation Not Equal
    int operator != (Relational B){
        return (x != B.x && y != B.y && z != B.z);
    }
// Operation Greater Then or Equal
    int operator >= (Relational B){
        return (x >= B.x && y >= B.y && z >= B.z);
    }
// Operation Less Then or Equal
    int operator <= (Relational B){
        return (x <= B.x && y <= B.y && z <= B.z);
    }
};
//  End of the Class
int main()
{
    Relational A(10, 10, 10), B(10, 10, 10);
    if(A == B)
        cout << "The two objects are equal\n";
    else
        cout << "The two objects are not equal\n";
    return 0;
}
//  End of the main
