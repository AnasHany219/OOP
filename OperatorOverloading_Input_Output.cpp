#include <iostream>
using namespace std;
class Distance{
private:
    int feet;
    int inches;
public:
// Default Constructor
    Distance(){
        feet = inches = 0;
    }
// Friend Functions
    friend istream &operator >> (istream &input, Distance &d);
    friend ostream &operator << (ostream &output, Distance &d);
};
// Friend Function for input the feet ind inches
istream &operator >> (istream &input, Distance &d){
    input >> d.feet >> d.inches;
    return input;
}
// Friend Function for input the feet ind inches
ostream &operator << (ostream &output, Distance &d){
    output << "Feet = " << d.feet << ", Inches = " << d.inches << "\n";
    return output;
}
int main()
{
    Distance D1;
    cout << "Enter feet and inches: ";
    cin >> D1;
    cout << D1;
    return 0;
}
//  End of the main
