#include <iostream>
using namespace std;
// Multiple Parameters
template<class First, class Second>
First smaller(First x, Second y)
{
    return (x < y ? x : y);
}
int main()
{
    int x = 89;
    double y = 56.78;
    cout << smaller(x, y) << "\n";          // That wrong because it will print 56 but we need 56.78
    
// The First Solution
    cout << smaller(y, x) << "\n";          // Swap x"int", y"double" to First Template is double
// The Second Solution
    cout << smaller<double>(y, x) << "\n";  //Write data type for the function
    
// The Third Solution is auto function like as : auto smaller(auto x, auto y){}
    return 0;
}
//  End of the main
