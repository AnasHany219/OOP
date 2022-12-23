#include<bits/stdc++.h>
using namespace std;
class Exception{
private:
    int arr[100];
public:
// Default Constructor
    Exception(){
        for(int i = 0; i < 100; i++)
            arr[i] = i;
    }
    void Get_Element(int element){
        if(element < 0)
            throw Small();
        else if(element >= 100)
            throw Big();
        else
            cout << "Element: " << element;
    }
    class Small{};
    class Big{};
};
int main(){
    Exception Ex;
    int x;
    try{
        cout << "Enter an element: ";
        cin >> x;
        Ex.Get_Element(x);
    }
    catch(Exception::Small){
        cout << "Exception Small Number";
    }
    catch(Exception::Big){
        cout << "Exception Big Number";
    }
    /*
    -----First Output-----
    Enter an element: -50
    Exception Small Number
    -----Second Output----
    Enter an element: 50
    Element: 50
    -----Third Output----
    Enter an element: 150
    Exception Big Number
    */
    return 0;
}
