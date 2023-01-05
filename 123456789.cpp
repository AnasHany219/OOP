#include <iostream>
#include <cstring>
using namespace std;

class Rectangle{
private:
    float width, length;
public:
    Rectangle(){
        width = length = 1;
    }
    void area(){
        cout << "Area = " << width * length << "\n";
    }
    void Set_Width(int w){
        if(w < 0.0)
            throw "Width Less than 0.0";
        else if(w >= 100.0)
            throw "Width larger than 100.0";
        else
            width = w;
    }
    int Get_Width(){
        return width;
    }
    void Set_Length(int l){
        if(l < 0.0)
            throw "Length Less than 0.0";
        else if(l >= 100.0)
            throw "Length Larger than 100.0";
        else
            length = l;
    }
    int Get_Length(){
        return length;
    }
};
int main(){
    int x;
    Rectangle R;
    try{
        cout << "Enter Width: ";
        cin >> x;
        R.Set_Width(x);
        cout << "Enter Length: ";
        cin >> x;
        R.Set_Length(x);
    }
    catch(const char * str){
        cout << "Exception: " << str;
    }
    R.area();
    return 0;
}
