#include <iostream>
using namespace std;
class student{
private:
    int id;
public:
    void SetID(int id){
        this->id = id;
    }
    int GetID(){
        return id;
    }
};
int main()
{
    student a;
    a.SetID(10);
    cout << a.GetID(); // 10
    return 0;
}
//  End of the main
