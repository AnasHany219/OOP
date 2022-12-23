#include<iostream>
using namespace std;

class Implementation{
private:
    int value;
public:
// Parameterize Constructor
    Implementation(int v){
        value = v;
    }
// Set value
    void setValue(int v){
        value = v;
    }
// Get value
    int getValue(){
        return value;
    }
};
// Proxy
class Interface{
private:
    Implementation *ptr;
public:
// Parameterize Constructor
    Interface(int v){
        ptr = new Implementation(v);
    }
// call Implementation's setValue Funtion
    void setValue(int v){
        ptr->setValue(v);
    }
// call Implementation's getValue Funtion
    int getValue(){
        return ptr->getValue();
    }
// Destructor
    ~Interface(){
        delete ptr;
    }
};
int main(){
    Interface i(5); // value = 5
    cout << "Interface contains: " << i.getValue() << " Before setValue.\n";
    i.setValue(10); // value = 10
    cout << "Interface contains: " << i.getValue() << " After setValue.\n";
    return 0;
}
