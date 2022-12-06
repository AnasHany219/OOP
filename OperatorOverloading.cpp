#include <iostream>
using namespace std;
// BOO => Binary Operating OverLoading
class BOO{
private:
    int num1, num2;
public:
// Parameterize Constructor
    BOO(int x = 0, int y = 0){
        num1 = x, num2 = y;
    }
    void GetData()
    {
        cout << "Enter The First Number : ";
        cin >> num1;
        cout << "Enter The Second Number : ";
        cin >> num2;
    }
// Display
    void showdata()
    {
        cout << "First Number = " << num1 << ", Second Number = " << num2 << "\n";
    }
// Operating +
    BOO operator + (BOO c2)
    {
        BOO c3;
        c3.num1 = num1 + c2.num1;
        c3.num2 = num2 + c2.num2;
        return c3;
    }
// Operating -
    BOO operator - (BOO c2)
    {
        BOO c3;
        c3.num1 = num1 - c2.num1;
        c3.num2 = num2 - c2.num2;
        return c3;
    }
// Operating *
    BOO operator * (BOO c2)
    {
        BOO c3;
        c3.num1 = num1 * c2.num1;
        c3.num2 = num2 * c2.num2;
        return c3;
    }
// Operating /
    BOO operator / (BOO c2)
    {
        BOO c3;
        c3.num1 = num1 / c2.num1;
        c3.num2 = num2 / c2.num2;
        return c3;
    }
};
//  End of the Class
int main()
{
    BOO c1,c2(10, 5), c3;
    c1.GetData();   // 5, 10
// Operating +
    c3 = c1 + c2;
// Show Data
    c3.showdata();  // 15, 15
/*
// Operating -
    c3 = c1 - c2;
// Operating *
    c3 = c1 * c2;
// Operating /
    c3 = c1 / c2;
*/
    return 0;
}
//  End of the main
